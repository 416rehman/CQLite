//
// Created by rehman on 2/8/22.
//

#include <string.h>
#include "InputBuffer.h"

InputBuffer *new_input_buffer() {
    InputBuffer* input_buffer = (InputBuffer*) malloc(sizeof(InputBuffer));

    input_buffer->buffer = NULL;
    input_buffer->buffer_length = 0;
    input_buffer->input_length = 0;

    return input_buffer;
}

void strip_prefix(InputBuffer *input_buffer, const char prefix) {
    if (input_buffer->input_length > 0 && input_buffer->buffer[0] == prefix) {
        input_buffer->input_length--; //Decrement input length
        input_buffer->buffer_length--; //Decrement buffer length
        memmove(input_buffer->buffer, input_buffer->buffer + 1, input_buffer->input_length); //Move buffer starting from index 1 to index 0
        input_buffer->buffer[input_buffer->input_length] = '\0'; //Set last index to null
    }
}

/**
 * Deallocates memory for the buffer.
 * @param inputBuffer
 */
void close_buffer(InputBuffer *inputBuffer) {
    free(inputBuffer->buffer);
    free(inputBuffer);
}