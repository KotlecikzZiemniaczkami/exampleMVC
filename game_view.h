//
// Created by Damian on 22.03.2023.
//

#ifndef EXAMPLEMVC_GAME_VIEW_H
#define EXAMPLEMVC_GAME_VIEW_H
#include "game_model.h"
#include <iostream>

class game_view {
    //x i y odpowiadaja za wymiary "gui"
    int x, y;
    game_model& model1;

public:
    //ustawia domyslne wymiary
    explicit game_view(game_model& model1, int szer = 30, int wys = 30);
    void menu();
    void interface(game_model& model1);
};

void interfejs_gry();

#endif //EXAMPLEMVC_GAME_VIEW_H
