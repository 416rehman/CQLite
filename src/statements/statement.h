//
// Created by rehman on 2/8/22.
//

#ifndef CQLITE_STATEMENT_H
#define CQLITE_STATEMENT_H

#include "../REPL/InputBuffer.h"

typedef enum {
    SUCCESS_PREPARE_STATEMENT,
    UNRECOGNIZED_PREPARE_STATEMENT,
} PrepareResult;

typedef enum {
    SELECT_STATEMENT,
    INSERT_STATEMENT,
} StatementType;

typedef struct {
    StatementType type;
} Statement;

PrepareResult prepare_statement(InputBuffer* input_buffer, Statement* statement);
void execute_statement(Statement* statement);

#endif //CQLITE_STATEMENT_H
