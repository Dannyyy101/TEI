#include "Person.h"

class Rezept{
        
    public:
        char* name;
        char* zutaten[10];
        int zubereitungsDauer;
        Person author;
        Rezept(char* name, char* zutaten, int zubereitungsDauer, Person author);
        ~Rezept();

};