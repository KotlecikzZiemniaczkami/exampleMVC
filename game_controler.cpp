//
// Created by student on 17.03.2023.
//

#include "game_controler.h"

game_controller::game_controller(game_model& model) : model(model) {
}

void game_controller::launch() {
    this->update();
    int key;
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
    //system("cls") czysci konsole
    system("cls");
    std::cout << "Console clicker!" << std::endl;
    //this-> this jest wskaźnikiem na bieżący obiekt,
    // który jest używany w C++ do odwoływania się do składowych obiektu wewnątrz jego metod.
    // Gdy metoda jest wywoływana dla określonego obiektu, this zawiera adres pamięci tego obiektu.
    //Operator -> jest używany w C++ do odwoływania się do składowych obiektów poprzez wskaźnik na obiekt.
    // W kontekście metod obiektów, this-> służy do odwoływania się do składowych obiektu, do którego metoda została wywołana.
    std::cout << "Points: " << this->model.get_points() << std::endl;
}
//TO DO FEATER (FITCHER)
//POINTSY MAJĄ BYĆ ODREBNA KLASA, A GAME CONTROLLER MA MIEC REFERENCJE DO TAMTEJ KLASY
//poprawic kod
//przeniesc konsole do nowej klasy game view i przylaczyc do pozostalych elementow
//ma tam byc np to co powinno byc w update czyli to cale czyszczenie "gui"


/*
 Pomysly:
 zrobic ekran startowy skladajacy sie z gwiazdek odpalajacy gre po wcisnieciu dowolnego klawisza
 (np. metoda _getch). Ekran powinien wygladac mniej wiecej tak:
 **************************
 * Zacznik kosmo clicker  *
 * press any button       *
 **************************

 po odpaleniu gry ma sie wyswietlic licznik punktow, a na dole pasek ladowania skladajacy sie
 ze znakow "|" (oczywiscie wszystko ma byc otoczone gwiazdkami). Oprocz tego ma byc wyswietlany poziom.
 gdy "|" zapelnia cale miejsce miedzy gwiazdkami, gracz przechodzi na kolejny poziom.

 ilosc klikniec potrzebna do narysowania jednej kreski "|" jest wyliczana ze wzoru lvl * 5,
 tym samym bedzie rosl poziom trudnosci
 */