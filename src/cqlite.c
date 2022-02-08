#include <stdio.h>
#include <string.h>
#include "REPL/InputBuffer.h"
#include "REPL/repl.h"

int main() {
    InputBuffer *input_buffer = new_input_buffer();
    printf("CQLite - Version 0.0.1\n");

    //REPL
    while (1) {
        print_prompt();
        read_input(input_buffer);

        if ( strcmp(input_buffer->buffer, ".exit") == 0){
            close_input(input_buffer);
            exit(EXIT_FAILURE);
        }
        else {
            printf("Unrecognized command '%s'.\n", input_buffer->buffer);
        }
    }
}


