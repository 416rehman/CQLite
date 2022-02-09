//
// Created by rehman on 2/8/22.
//

#include <string.h>
#include <stdio.h>
#include "statement.h"

PrepareResult prepare_statement(InputBuffer *input_buffer, Statement *statement) {
    if (strncmp(input_buffer->buffer, "insert", 6) == 0) {
        statement->type = INSERT_STATEMENT;
        return SUCCESS_PREPARE_STATEMENT;
    }
    else if (strcmp(input_buffer->buffer, "select") == 0) {
        statement->type = SELECT_STATEMENT;
        return SUCCESS_PREPARE_STATEMENT;
    }
    return UNRECOGNIZED_PREPARE_STATEMENT;
}

void execute_statement(Statement* statement) {
    switch (statement->type) {
        case SELECT_STATEMENT: {
            printf("This is the SELECT statement\n");
            break;
        }
        case INSERT_STATEMENT: {
            printf("This is the INSERT statement\n");
            break;
        }
        default: {
            printf("Invalid statement\n");
        }
    }
}