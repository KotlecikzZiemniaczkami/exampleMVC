//
// Created by Damian on 22.03.2023.
//

#ifndef EXAMPLEMVC_GAME_VIEW_H
#define EXAMPLEMVC_GAME_VIEW_H
#include "game_model.h"
#include "game_controler.h"

class game_view {
    //x i y odpowiadaja za wymiary "gui"
    int x, y;

public:
    //ustawia domyslne wymiary
    explicit game_view(int szer = 30, int wys = 30);
    void menu();
    void interface(game_model& model);
    friend void interfejs_gry();
};

void interfejs_gry();

#endif //EXAMPLEMVC_GAME_VIEW_H
