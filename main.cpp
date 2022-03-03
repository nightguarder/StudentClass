#include <iostream>
#include "student.cpp"
using namespace std;
//Vymyslete a naprogramujte metody, pomocí kterých si budeme moci prohlížet
//známky studenta, zjišťovat počet splněných předmětů, průměr jeho známek.

//Napište třídu Student, která bude sloužit k uchovávání známek o studentech. Definujte
//výčtový typ předmět a známka. Student si bude moc zapsat nejvýše MAX=20 
//předmětů pomocí metody zapis() - splneno
//udeleni znamky pomoci metody hodnoceni() - splneno
//vypis znamek() - splneno
//s_zapocet zmenit nazev
// **argv[arg1, lokace arg1]

int main(int argc, char **argv){
    Student *cyril = new Student();
    Predmet nemcina, anglictina,programovani; 
    nemcina.nazev = nem; anglictina.nazev = ang; programovani.nazev = prog;
    cyril->zapis(nemcina);
    cyril->zapis(anglictina);
    cyril->zapis(programovani);
    programovani.zapocet = false;
    cyril->hodnoceni(nemcina); 
    cyril->hodnoceni(anglictina);
    cyril->hodnoceni(programovani); //nema zapocet
    cyril->znamky(); //znamky z predmetu

    return 0;
}