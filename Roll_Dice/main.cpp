/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <cstdlib>
using namespace std;

int rand();
int x=0;

class Dice{
    public:
        Dice(string colour, unsigned int maxpoints);
        string getColour();
        unsigned int rollDice(int times);
        
    private:
        string colour_;
        unsigned int maxpoints_;

};
   Dice::Dice(string colour, unsigned int maxpoints){
            colour_ = colour;
            maxpoints_ = maxpoints;
   }
        
        string Dice::getColour(){
            return colour_;
        }
        
        unsigned int Dice::rollDice(int n){
            for(int i=1;i<=n;i++){
                    x=x+rand()%6+1;
                    cout<<x<<endl;
                }
            if(x>maxpoints_){
                maxpoints_=x;
            }
            return x;
        }
        
        


int main(void)
{
    Dice Divan("Blue",100);
    cout<<Divan.getColour()<<endl;
    cout<<Divan.rollDice(7)<<endl;
 
    return 0;
}


