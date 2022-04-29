# NPG_gr4_Szachy

Pliki są zainkludowane w sposób:
main <- App <- board <- pieces 

App.cpp plik z głonwymi funkcjiami aplikacji:
- init() - będzie tworzyć figury i usawi je na planszy
- run() - przebieg gry
- end() - zakończenie gry

Board posiada funkcjie zwiazane z planszą da gry:
- print() - wyświetla plansze

Plik piece.hpp zawiera:
- strukture Position 
- enum Color
- klase abstrakcyjną Piece

Struktura Position zawiera składowe x, y reprezentujące pozycje na planszy.
Typ wyliczeniowy Color określa color figury: white, black.
Klasa abstrakcyjna definuje interfejs dla figur.