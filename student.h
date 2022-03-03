#define LIST_PREDMETY 20
#define MAX_ZNAMKY 5
struct Predmet
    {
        char nazev;
        int znamka;
        bool zapocet;
    };

enum Predmety{
    nem = 'n', ang = 'a',oop = 'i',prog = 'c'
};

class Student
{
private:
    int pocet;
    int znamka;
    float prumer;
    struct Predmet predmety[LIST_PREDMETY];
public:
    Student(/* args */){
        pocet = 0;
        znamka = 0;
    };
    
    //metody
    int zapis(struct Predmet nazev);
    void printout(const char * message);
    bool zapocet(char nazev); // if !zapocet() == 0 student nema zapocet
    int hodnoceni(struct Predmet nazev);
    void znamky(void);
};

//Student::Student(/* args */)

