cmake_minimum_required(VERSION 3.21)
project(cqlite C)

set(CMAKE_C_STANDARD 11)

add_executable(cqlite src/cqlite.c src/REPL/InputBuffer.h src/REPL/InputBuffer.c src/REPL/repl.c src/REPL/repl.h src/statements/metaCommand.h src/statements/statement.h src/statements/metaCommand.c src/statements/statement.c)
