/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <math.h>
using namespace std;

float ay, ax, x, ux, uy;

int main()
{
    for ( ay=0; ay<=2; ay + 1){
        cout<<"1"<<endl;
        for ( ax=0; ax<=2; ax + 1){
            cout<<"2"<<endl;
            for ( uy=0; uy<=2; uy + 1){
                cout<<"3"<<endl;
                for ( ux=0; ux<=2; ux + 1){
                    cout<<"4"<<endl;
                    for ( x=0; x<=2; x ++){
                        cout<<"5"<<endl;
                        if(0.05 == 1/ax * (ay*x - uy*ux + (uy - ay*ux/ax)*pow(ux*ux+ 2*ax*x , 0.5))){
                            cout<<" ax, ay, ux, uy, x equals "<<endl;
                            cout<<ax<<", "<<ay<<", "<<ux<<", "<<uy<<", "<<x<<endl;
                        }
                        else 
                        { cout<<"none"<<endl;}
    }
    }
    }
    }
    }
    

    return 0;
}



