//
// Created by rehman on 2/8/22.

#ifndef CQLITE_INPUTBUFFER_H
#define CQLITE_INPUTBUFFER_H

#include <stdlib.h>

typedef struct InputBuffer {
    char* buffer;
    size_t buffer_length;
    ssize_t input_length;
} InputBuffer;

InputBuffer* new_input_buffer();
void strip_prefix(InputBuffer* input_buffer, char prefix);
void close_buffer(InputBuffer* inputBuffer);
#endif //CQLITE_INPUTBUFFER_H
