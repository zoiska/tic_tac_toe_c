#include "logic.h"

void gamemode(char *box){
    int gm;
    printf("Eingabe <1> fuer Einzelspieler, Eingabe <2> fuer zwei Spieler.\n");
    scanf("%d", &gm);
    if(gm == 1){
        //ein_Spieler();
    }
    else if(gm == 2){
        zwei_Spieler(box);
    }
    else {
        printf("Ungueltige Eingabe.\n");
    }
}

void zwei_Spieler(char *box){
    print_Board();
    eing_x(box);
    eing_o(box);
    eing_x(box);
    eing_o(box);
    eing_x(box);
    eing_o(box);
    eing_x(box);
    eing_o(box);
    eing_x(box);
}

void eing_x(char *box){
    int eing;
    printf("Eingabe fuer X:\n");
    scanf("%d", &eing);
    if(box[eing - 1] != '_'){
        printf("Ungueltige Eingabe!\n\n");
        eing_x(box);
    }
    else {
        box[eing - 1] = 'X';
        print_Current(box);
        check_Win(box, 'X');
    }
}

void eing_o(char *box){
    int eing;
    printf("Eingabe fuer O:\n");
    scanf("%d", &eing);
    if(box[eing - 1] != '_'){
        printf("Ungueltige Eingabe!\n\n");
        eing_o(box);
    }
    else {
        box[eing - 1] = 'O';
        print_Current(box);
        check_Win(box, 'O');
    }
}

void check_Win(char *box, char player){
    if(box[0] == player && box[1] == player && box[2] == player
    || box[3] == player && box[4] == player && box[5] == player
    || box[6] == player && box[7] == player && box[8] == player
    || box[0] == player && box[3] == player && box[6] == player
    || box[1] == player && box[4] == player && box[7] == player
    || box[2] == player && box[5] == player && box[8] == player
    || box[0] == player && box[5] == player && box[8] == player
    || box[2] == player && box[5] == player && box[6] == player){
        printf("Spieler <%c> hat gewonnen!", player);
        exit(0);
    }
}