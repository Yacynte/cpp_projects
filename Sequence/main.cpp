/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;

int icontinue(int a, int b){
    int c= 2*(2*b - a);
    return c;
}

int main()
{
    int a, b;
    cout<<"Enter the sequence"<<endl;
    cin>>a>>b;
    cout<<"The next num of the sequence is  "<< icontinue(a,b)<<endl;

    return 0;
}
