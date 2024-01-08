#include "board.h"
#include <stdlib.h>

#ifndef LOGIC_H
#define LOGIC_H

void gamemode(char *box);
void zwei_Spieler(char *box);
void ein_Spieler();
void eing_x(char *box);
void eing_o(char *box);
void check_Win(char *box, char player);

#endif //LOGIC_H
