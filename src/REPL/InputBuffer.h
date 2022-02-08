//
// Created by rehman on 2/8/22.
//

#ifndef CQLITE_INPUTBUFFER_H
#define CQLITE_INPUTBUFFER_H

#include <stdlib.h>

typedef struct InputBuffer {
    char* buffer;
    size_t buffer_length;
    ssize_t input_length;
} InputBuffer;

InputBuffer* new_input_buffer();

#endif //CQLITE_INPUTBUFFER_H
