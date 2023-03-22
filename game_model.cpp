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

void game_model::higher_lvl() {
    if (this->points > this->lvl * 5)
        this-> lvl ++;
}

int game_model::get_lvl() {
    return this->lvl;
}

game_model::game_model() {
    this->points = 0;
    this->lvl = 0;

}

void game_model::reset_points() {
    this->points = 0;
}
