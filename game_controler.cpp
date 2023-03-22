//
// Created by student on 17.03.2023.
//

#include "game_controler.h"
#include "game_view.h"

game_controller::game_controller(game_model& model) : model(model) {
}

//dodatkowa funkcja pomagajaca w wyznaczaniu poziomow. jaka potege
//liczby 10 przekroczy punktacja, taki jest poziom
int potegi(int liczba){
    int pomocnicza = 0;

    while (liczba > 10){
        liczba = liczba / 10;

        pomocnicza ++;
    }
    return pomocnicza;
}

void game_controller::launch() {
    game_view view1;
    int key;
    //wyswietlanie ekranu startowego
    view1.menu();
    key = _getch();
    this->update();
    /*
     petla pobierajaca tak dlugo wartosci ascii poszczegulnych wpisanych klawiszy
     az ktoys z nich nie ma numeru 27 (escape)
     */
    do {
        /*
         _getch pobiera znak z klawiatury bez czekanie na zatwierdzenie ze strony użytkownika.
         Funkcja _getch() zwraca wartość typu int, która reprezentuje kod ASCII wciśniętego klawisza.
         Dla przykładu, klawisz "a" na klawiaturze ma kod ASCII równy 97,
         więc jeśli użytkownik naciśnie klawisz "a" i program użyje _getch(), to zostanie zwrócona wartość 97.
         */
        key = _getch();
        if (key == 13) {
            /*
             gdy pobrany kod ascii wskazuje na enter wywoływana jest metoda
             .add_points która odpowiada za dodawanie okreslonej liczby punktow
             do zmiennej points okreslonej w klasie. Nastepnie jest wywolana metoda update
             ktora czysci konsole i wypisuje na niej wszystko, razem z nadpisana liczba punktow na nowo
             */
            this->model.add_points(1);
            this->update();
        }
    }
    while (key != 27);
}

void game_controller::update() {
    game_view view2;
    int miernik_lvl;
    int poziom = model.get_lvl();
    //system("cls") czysci konsole
    system("cls");
    view2.interface(model);
    miernik_lvl = potegi(model.get_points());
    if (miernik_lvl > poziom){
        model.higher_lvl();
        model.reset_points();
    }
    if ((poziom == 2)&&(model.get_points() == 1)){
        std::string sciezka = "https://www.youtube.com/watch?v=3mbvWn1EY6g";
        std::string komenda = "start " + sciezka;
        system(komenda.c_str());
    }
}
