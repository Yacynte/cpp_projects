/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <math.h>

using namespace std;

    float height(float a, float t, float u){
        float h;
        h = u*t + 0.5*a*pow(t,2);
        return h;
    }


int main()
{
    float a, u, t;
    cout<<"Enter the value of the acceleration"<<endl;
    cin>>a;
    cout<<"Enter the initial speed"<<endl;
    cin>>u;
    cout<<"Enter the time"<<endl;
    cin>>t;
    
   cout<<"The height is: "<< height(a,t,u)<<endl;
    return 0;
}

