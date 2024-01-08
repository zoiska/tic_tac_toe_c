#include "board.h"

void print_Board(){
    printf("\n\nSpieler 1 <X>  -  Spieler 2 <O>\n\n");
    printf(" 1 | 2 | 3 \n");
    printf("-----------\n");
    printf(" 4 | 5 | 6 \n");
    printf("-----------\n");
    printf(" 7 | 8 | 9 \n");
    printf("\nGib die Zahl des Feldes ein in das du platzieren moechtest.\n");
}

void print_Current(char array[]){
    printf("\n\n");
    printf(" %c | %c | %c \n", array[0], array[1], array[2]);
    printf("-----------\n");
    printf(" %c | %c | %c \n", array[3], array[4], array[5]);
    printf("-----------\n");
    printf(" %c | %c | %c \n", array[6], array[7], array[8]);
}