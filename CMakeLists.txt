cmake_minimum_required(VERSION 3.27)
project(tic_tac_toe_c C)

set(CMAKE_C_STANDARD 11)

add_executable(tic_tac_toe_c main.c
        board.c
        board.h
        logic.c
        logic.h)
