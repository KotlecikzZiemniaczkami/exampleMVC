//
// Created by Damian on 17.03.2023.
//

#include "game_controler.h"

void game_controler::launch(game_model& model) : model(model){
    std::cout<<"CONSOLE CLICKER!"<<std::endl;
    std::string input;
    this->update();
    int key;

    do {
        key = _getch(); //nie przechodzimy do dolu i wczytuje liczbe (dziwna liczbe)
        if (key == 13){
            system("cls"); //czysci
            this -> model ++;
            std::cout << "points:" << points << std::endl;
        }
    }
    while (key != 27);
}

game_controler::game_controler(game_model& model) : model(model) {
    this->model.add_points(1);
}

void game_controler::update() {

}
//TO DO FEATER (FITCHER)
//POINTSY MAJĄ BYĆ ODREBNA KLASA, A GAME CONTROLLER MA MIEC REFERENCJE DO TAMTEJ KLASY
//poprawic kod
//przeniesc konsole do nowej klasy game view i przylaczyc do pozostalych elementow
//ma tam byc np to co powinno byc w update czyli to cale czyszczenie "gui"