//
// Created by Damian on 17.03.2023.
//

#ifndef EXAMPLEMVC_GAME_MODEL_H
#define EXAMPLEMVC_GAME_MODEL_H


class game_model {

public:
    game_model();
    int get_points();
    int get_lvl();
    void higher_lvl();
    void add_points(int p);
    void reset_points();

private:
    int lvl;
    int points;
};

#endif //EXAMPLEMVC_GAME_MODEL_H

