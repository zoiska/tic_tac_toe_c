#include <stdlib.h>
#include "board.h"

int main() {
    char *box = malloc(9 * sizeof(char));
    for (int i = 0; i < 9; i++) {
        box[i] = '_';
    };

    print_Board();
    print_Current(box);

    free(box);
    return 0;
}
