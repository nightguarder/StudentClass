#include "student.h"
#include <iostream>
using namespace std;

void Student::printout(const char* message){
    std::cout <<message <<endl;
}

bool Student::zapocet(char nazev){
    for (size_t i = 0; i < pocet; i++)
        if (predmety[i].nazev == nazev)
           return predmety[i].zapocet = true;
    return false;
}

int  Student::zapis(Predmet predmet){

    this->predmety [this->pocet] = predmet;
    this ->pocet++;
    return 0;
}
int generate_num(int hodnoceni){
    int number = 0;
    number = rand()%hodnoceni;
    srand(time(0));
    return number;
}
int Student::hodnoceni(Predmet znamka){
    char nazev = ' ';
    int number = 0;
    printout("Zapsane predmety: ");
    for (size_t i = 0; i < pocet; i++)
    std::cout<<predmety[i].nazev <<", ";
    std::cout<<"\n";

    printout("Zvolte si predmet: ");
    std::cin>>nazev;

    if (!zapocet(nazev)){
        printout("Z tohoto predmetu nemate zapocet.");
        return -1;
    } //nema zapocet
    else
    for (size_t i = 0; i < pocet; i++)
        if (predmety[i].nazev == nazev)
           return predmety[i].znamka = generate_num(5);
    return 0;
}
void Student::znamky(void){
    float total = 0;
    printout("Znamky z predmetu: ");
    for (size_t i = 0; i < pocet; i++)
        std::cout<<predmety[i].nazev <<", "<<predmety[i].znamka <<endl;

    printout("Vas celkovy prumer znamek: ");
    for (size_t i = 0; i < pocet; i++)
        total = predmety[i].znamka++;
    prumer = total/pocet; 
    std::cout<<prumer<<endl;
    
}
