//
// Created by zoisk on 13.01.2024.
//

#ifndef PROFILE_H
#define PROFILE_H

#define BUFFER_SIZE 12

struct player{
    char player_name[BUFFER_SIZE];
    int  player_wins;
    int player_losses;
};

void print_player();
void player_win()

#endif //PROFILE_H
