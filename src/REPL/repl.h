//
// Created by rehman on 2/8/22.
//

#ifndef CQLITE_REPL_H
#define CQLITE_REPL_H

#include "InputBuffer.h"

void print_prompt();
void read_input(InputBuffer *input_buffer);
void close_input(InputBuffer* inputBuffer);

#endif //CQLITE_REPL_H
