#include <iostream>

struct GameState {
    char choice;
    int turn_count = 0;
    int game_score = 0;
    int score_this_turn = 0;
    bool game_over = false;
    bool turn_over = false;
};


int main() {

    GameState my_game;

    display_rules();
    play_game(my_game);
    return 0;
}

