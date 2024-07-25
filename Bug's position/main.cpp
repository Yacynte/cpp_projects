/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;

class Bug {
    public :
 
        int reset() 
        {
            position_ = 0 ;
        }
        int getPosition() const
        {
            return position_ ;
        }
        void up()
        {
            position_ = position_+10 ;
            if(position_>100){
                reset();
            }
        }
        
    private :
        int position_ ;
};

int main()
{
    Bug climber;
    for(int i=0;i<=12;i++){
        climber.up();
        cout<<"Bug's current possition is: " << climber.getPosition() << "cm"<<endl ;
    }
    

    return 0;
}
