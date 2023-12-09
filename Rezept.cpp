#include <iostream>
#include "Rezept.h";

Rezept::Rezept(char* name, char* zutaten, int zubereitungsDauer, Person author){
    name = name;
    zutaten = zutaten;
    zubereitungsDauer = zubereitungsDauer;
    author = author;

    std::cout << "Rezept erfolgreich erstellt!" << std::endl;
}
