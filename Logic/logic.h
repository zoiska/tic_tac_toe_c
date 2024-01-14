#include "../Board/board.h"
#include "../outputsheet/output.h"

#include <stdlib.h>

#ifndef LOGIC_H
#define LOGIC_H

void zwei_Spieler(char *box);
void eing_x(char *box);
void eing_o(char *box);
void check_Win(char *box, char player);

#endif //LOGIC_H
