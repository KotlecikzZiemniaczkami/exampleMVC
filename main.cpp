/*Co zostało dodane?
 * Nowa klasa game_view pokrywajaca wszystko co dotyczy bezposrednio wygladu interfejsu
 * okno startowe przed rozpoczeciem gry
 * ozdobniki takie jak ramka
 * zmianie ulegly rowniez pozostale klasy
 * powstaly poziomy
 * poziomy zmieniajace poziom trudnosci zgodnie z potegami liczby 10 (na pierwszy poziom trzeba przekroczyc 11 klikniec, na nastepny 110 itd.
 * poziomy sa zaznaczane w interfejsie za pomoca '|'
 * po przekroczeniu kazdego poziomu liczba punktow jest zerowana
 * po przekroczeniu 2 poziomu jest otwierany link do utworu "Ace of spades" zespolu Motorhead na You Tube
 * wszystko zrobione jest zgodnie z MVC
*/

#include "game_controler.h"
#include "game_model.h"

int main() {
    game_model model;
    game_view view(model);
    game_controller controller(model, view);
    controller.launch();
    return 0;
}
