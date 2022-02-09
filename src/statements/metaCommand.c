//
// Created by rehman on 2/8/22.
//

#include "metaCommand.h"

MetaCommandResult handle_meta_command(InputBuffer* inputBuffer) {
    if (strcmp(inputBuffer->buffer, "exit")==0 || strcmp(inputBuffer->buffer, "quit")==0) {
        close_buffer(inputBuffer);
        exit(EXIT_SUCCESS);
    }
    else {
        return UNRECOGNIZED_META_COMMAND;
    }
}
