#include <stdio.h>
#include <string.h>
#include "REPL/InputBuffer.h"
#include "REPL/repl.h"
#include "statements/metaCommand.h"
#include "statements/statement.h"

const char META_COMMAND_PREFIX='.';

int main() {
    InputBuffer *input_buffer = new_input_buffer();
    printf("CQLite - Version 0.0.1\n");

    //REPL
    while (1)
    {
        print_prompt();
        read_input(input_buffer);

        if ((input_buffer->buffer[0] == META_COMMAND_PREFIX))
        {
            strip_prefix(input_buffer, META_COMMAND_PREFIX);
            switch (handle_meta_command(input_buffer))
            {
                case SUCCESS_META_COMMAND:
                {
                    continue;
                }
                case UNRECOGNIZED_META_COMMAND:
                {
                    printf("Unrecognized command: %s\n", input_buffer->buffer);
                    continue;
                }
            }
        }

        Statement statement;
        switch (prepare_statement(input_buffer, &statement))
        {
            case SUCCESS_PREPARE_STATEMENT:
                break;
            case UNRECOGNIZED_PREPARE_STATEMENT:
                printf("Unrecognized statement: %s\n", input_buffer->buffer);
                continue;
        }

        execute_statement(&statement);
        printf("Executed: %s", input_buffer->buffer);
    }
}


