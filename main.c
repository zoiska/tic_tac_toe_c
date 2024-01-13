#include <stdlib.h>
#include "Board/board.h"
#include "Logic/logic.h"

int main() {
    char *box = malloc(9 * sizeof(char));
    for (int i = 0; i < 9; i++) {
        box[i] = '_';
    };

    gamemode(box);

    return 0;
}
