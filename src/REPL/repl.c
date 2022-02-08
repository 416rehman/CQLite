//
// Created by rehman on 2/8/22.
//

#include <stdio.h>
#include "repl.h"

/**
 * Prints the prompt
 */
void print_prompt() {
    printf("db > ");
}

/**
 * Reads a line of input from stdin and stores it in the given InputBuffer.
 * @param input_buffer
 */
void read_input(InputBuffer* input_buffer) {
    //getline mallocates input_buffer->buffer.
    ssize_t bytesRead = getline(&(input_buffer->buffer), &(input_buffer->buffer_length), stdin);

    if (bytesRead <= 0) {
        printf("Error reading input\n");
        exit(EXIT_FAILURE);
    }

    //Ignore the trailing newline
    input_buffer->input_length = bytesRead - 1;
    input_buffer->buffer[bytesRead - 1] = 0;
}

/**
 * Deallocates memory for the buffer.
 * @param inputBuffer
 */
void close_input(InputBuffer *inputBuffer) {
    free(inputBuffer->buffer);
    free(inputBuffer);
}
