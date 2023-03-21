//
// Created by Damian on 17.03.2023.
//

#include "game_model.h"

int game_model::get_points() {
    return this->points;
}

void game_model::add_points(int p) {
    this->points += p;
}
