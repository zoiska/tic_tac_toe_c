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
        sleep(1);
        printf("Ungueltige Eingabe.\n");
    }
}

void zwei_Spieler(char *box){
    print_Board();
    eing_x(box);
    eing_o(box);
}

void eing_x(char *box){
    int eing;
    printf("Eingabe fuer X:\n");
    scanf("%d", &eing);
    box[eing - 1] = 'X';
    print_Current(box);
}

void eing_o(char *box){
    int eing;
    printf("Eingabe fuer O:\n");
    scanf("%d", &eing);
    box[eing - 1] = 'O';
    print_Current(box);
}