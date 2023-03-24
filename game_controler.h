//
// Created by Damian on 17.03.2023.
//

#ifndef EXAMPLEMVC_GAME_CONTROLLER_H
#define EXAMPLEMVC_GAME_CONTROLLER_H

#include <iostream>
#include <conio.h>
#include <cstdlib>
#include "game_model.h"
#include "game_view.h"

class game_controller {

public:

    explicit game_controller(game_model& model, game_view& view);
    void launch();
    void update();

private:

    game_model& model;
    game_view& view;

};


#endif //EXAMPLEMVC_GAME_CONTROLLER_H

