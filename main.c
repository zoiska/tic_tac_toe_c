#include <stdlib.h>
#include "board.h"
#include "logic.h"

int main() {
    char *box = malloc(9 * sizeof(char));
    for (int i = 0; i < 9; i++) {
        box[i] = '_';
    };

    gamemode(box);

    free(box);
    return 0;
}
