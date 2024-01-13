cmake_minimum_required(VERSION 3.27)
project(tic_tac_toe_c C)

set(CMAKE_C_STANDARD 11)

add_executable(tic_tac_toe_c main.c
        Board/board.c
        Board/board.h
        Logic/logic.c
        Logic/logic.h
        Profile/profile.c
        Profile/profile.h)
