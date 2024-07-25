/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/

#include <iostream>
using namespace std;

double Average(double aray[], int x){
    double sum, ave;
    for(int i=0;i<x;i++){
        sum = aray[i]+sum; 
    }
    ave = sum/x;
    cout<< ave<<endl;
    return 0;
}

    

int main()
{
    int i;
    double expenditure[3][12] = {{10,15,20,36,15,45,20,35,24,64,52,12},{0,0,0,0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0,0,0,0}};
    for(i=0;i<=2;i++){
        expenditure[1][i] = expenditure[0][i]; 
    }
    
    for(i=3;i<=5;i++){
        expenditure[1][i] = 1.2 * expenditure[0][i]; 
    }
    for(i=6;i<=8;i++){
        expenditure[1][i] = 1.25 * expenditure[0][i]; 
    }
    for(i=9;i<=11;i++){
        expenditure[1][i] = 1.2 * expenditure[0][i]; 
    }
    for(i=0;i<=11;i++){
        expenditure[2][i] = 1.1 * expenditure[1][i]; 
    }
    cout<<expenditure[1][2]<<endl;

    Average(expenditure[0],12);
    Average(expenditure[1],12);
    Average(expenditure[2],12);
    return 0;
}