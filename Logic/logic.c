#include "logic.h"

void zwei_Spieler(char *box){
    print_Board();
    for(int i = 0; i < 9; i++){
        if(i != 8){
            eing_x(box);
            eing_o(box);
        }
        else {
            eing_x(box);
        }
    }
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
        write_output(box, 'X');
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
        write_output(box, 'O');
        print_Current(box);
        check_Win(box, 'O');
    }
}

void check_Win(char *box, char player){
    if((box[0] == player && box[1] == player && box[2] == player)
        || (box[3] == player && box[4] == player && box[5] == player)
        || (box[6] == player && box[7] == player && box[8] == player)
        || (box[0] == player && box[3] == player && box[6] == player)
        || (box[1] == player && box[4] == player && box[7] == player)
        || (box[2] == player && box[5] == player && box[8] == player)
        || (box[0] == player && box[4] == player && box[8] == player)
        || (box[2] == player && box[4] == player && box[6] == player)){
        append_winner(box, player);
        printf("Spieler <%c> hat gewonnen!", player);
        exit(0);
    }
    else if(box[0] != '_' && box[1] != '_' && box[2] != '_' && box[3] != '_'&& box[4] != '_'
        && box[5] != '_' && box[6] != '_' && box[7] != '_' && box[8] != '_') {
        printf("Unentschieden!");
    }
}
