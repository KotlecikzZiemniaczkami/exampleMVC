//
// Created by Damian on 22.03.2023.
//
#include "game_view.h"
 using namespace std;
game_view::game_view(game_model& model1, int szer, int wys) : model1(model1) {
    this->x = szer;
    this->y = wys;

}

void game_view::menu() {
    for (int i = 0; i <= x + 1; i++)
        cout << '*';
    cout << endl;
    for (int i = 0; i < y; i++){
        if (i == 2){
            cout << '*';
            for (int j = 0; j < 10; j++)
                cout << ' ';
            cout << "MEGA CLICK";
            for (int j = 0; j < 10; j++)
                cout << ' ';
            cout << '*' << endl;
            continue;
        }
        if (i == (y-2)){
            cout << '*';
            for (int j = 0; j < 7; j++)
                cout << ' ';
            cout << "PRESS ANY BUTTON";
            for (int j = 0; j < 7; j++)
                cout << ' ';
            cout << '*' << endl;
            continue;
        }

    }
    for (int i = 0; i <= x + 1; i++)
        cout << '*';
}





void game_view::interface(game_model& model1){

    int wynik = model1.get_points();
    int dl_wyniku = to_string(wynik).length();

    //gora ramki
    for (int i = 0; i <= x + 2; i++)
        cout << '*';
    cout << endl;

    //wnetrze i obramowanie ramki
    for (int i = 0; i < y; i++){
        if (i == 2){
            cout << '*';
            for (int j = 0; j < (((x-dl_wyniku)/2-2)); j++)
                cout << ' ';
            cout << "SCORE:" << wynik;
            for (int j = 0; j < ((x-dl_wyniku)/2-2); j++)
                cout << ' ';
            cout << '*' << endl;
            continue;
        }

        //dol ramki
        if (i == (y-2)){
            cout << '*';
            for (int j = 0; j < (x-10)/2; j++)
                cout << ' ';
            cout << "PRESS ENTER";
            for (int j = 0; j<(x-10)/2; j++)
                cout << ' ';
            cout << '*' << endl;
            continue;
        }

    }
    for (int i = 0; i <= x + 2; i++)
        cout << '*';
    cout << endl;

    //wyswietlanie lvl za pomoca kresek
    cout << "MOC KLIKNIEC ROSNIE:";
    if (model1.get_lvl()>0){
        for (int w = 0; w < model1.get_lvl(); w++) {
            cout << '|';
        }
    }
    cout << endl;
    if (model1.get_lvl()>6){

    }
}
