/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;

class Meal{
    public:
    Meal(string name, unsigned int kcal, bool vegan, unsigned int rating);
    string getName()const;
    unsigned int getKcal()const;
    bool isVegan()const;
    unsigned int getRating();
    string getRatingAsWord()const;
    void print()const;
    Meal operate(const Meal&rhs);
    void fry();
    double getPrice();
    
    private:
    string name_;
    unsigned int kcal_, rating_;
    bool vegan_;
};

    Meal::Meal(string name, unsigned int kcal, bool vegan, unsigned int rating){
        if (name_.size()<2){
            name_="Unkown";
        }
        if(rating_>7){
            rating_=7;
        }
    }
    string Meal::getName()const{
        return name_;
    }
    unsigned int Meal::getKcal()const{
        return kcal_;
    }
    bool Meal::isVegan()const{
        return vegan_;
    }

int main()
{
    printf("Hello World");

    return 0;
}
