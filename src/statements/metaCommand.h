//
// Created by rehman on 2/8/22.
//

#ifndef CQLITE_METACOMMAND_H
#define CQLITE_METACOMMAND_H

#include <string.h>
#include "../REPL/InputBuffer.h"

typedef enum {
    SUCCESS_META_COMMAND,
    UNRECOGNIZED_META_COMMAND,
} MetaCommandResult;

MetaCommandResult handle_meta_command(InputBuffer* inputBuffer);

#endif //CQLITE_METACOMMAND_H
