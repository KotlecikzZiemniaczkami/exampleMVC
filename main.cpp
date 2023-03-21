#include "game_controler.h"
#include "game_model.h"

int main() {
    game_model model;
    game_controller controller(model);
    controller.launch();
    return 0;
}
