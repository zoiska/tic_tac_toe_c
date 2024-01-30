#include "output.h"

void write_output(char array[], char player) {
    FILE *myFile = fopen("../outputsheet/games", "a");
    fprintf(myFile, "Zug von Spieler <%c>\n", player);
    fprintf(myFile, " %c | %c | %c \n", array[0], array[1], array[2]);
    fprintf(myFile, "-----------\n");
    fprintf(myFile, " %c | %c | %c \n", array[3], array[4], array[5]);
    fprintf(myFile, "-----------\n");
    fprintf(myFile, " %c | %c | %c \n", array[6], array[7], array[8]);
    fprintf(myFile, "\n\n");
    fclose(myFile);
}

void append_winner(char array[], char player){
    FILE *myFile = fopen("../outputsheet/games", "a");
    fprintf(myFile, "Spieler <%c> hat gewonnen!", player);
    fclose(myFile);
}