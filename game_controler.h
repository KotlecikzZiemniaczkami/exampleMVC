//
// Created by Damian on 17.03.2023.
//
#include <iostream>
#include <conio.h>
#include "game_model.h"
#ifndef EXAMPLEMVC_GAME_CONTROLER_H
#define EXAMPLEMVC_GAME_CONTROLER_H

class game_controler {
public:
    explicit (game_model& model); //konstruktor. explicit pilnuje ze trzeba podac zmienna
    void launch(game_model& model); //metoda
    void update();

private:
    game_model& model;
};

//TO DO: STWORZYC NOWA KLASE DO LICZENIA PUNKTOW


#endif //EXAMPLEMVC_GAME_CONTROLER_H
