/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;

int gcd(int a, int b){
    int r, r1, c;
    r1=a%b;
    c=a/b;
    if(r1==0){return b;}
    else{
        r=r1;
        while(r!=0){
        r=b%r1;
        b=r1;
        r1=r;
        }
      return b;
    }
}

int main()
{
    int a, b;
    cout<<"Enter the values"<<endl;
    cin>>a>>b;
    cout<<"gcd("<<a<<","<<b<<") =  "<<gcd(a, b)<<endl;

    return 0;
}
