# NPG_gr4_Szachy

Pliki są zainkludowane w sposób:
main <- App <- board <- pieces 

App.cpp plik z głównymi funkcjami aplikacji:
- init() - będzie tworzyć figury i ustawiać na planszy
- run() - przebieg gry
- end() - zakończenie gry

Board posiada funkcje zwiazane z planszą do gry:
- print() - wyświetla plansze

Plik piece.hpp zawiera:
- strukture Position 
- enum Color
- klase abstrakcyjną Piece

Struktura Position zawiera składowe x, y reprezentujące pozycje na planszy(kolejnośc według ukałdu
współrzędnych y - wiersz, x - kolumna).
Typ wyliczeniowy Color określa kolor figury: white, black.
Klasa Piece jest klasą macierzystą dla wsyzstkich figur.