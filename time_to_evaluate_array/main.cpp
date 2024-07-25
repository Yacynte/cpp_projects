/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <time.h>

using namespace std;


bool arr(int *ints,int count, int k){
    clock_t start = clock();
    

    if (count<=1000000 && sizeof(ints) != 0 ){
        for(int i=0; i<count; i++){
            if(ints[i]==k){
                clock_t end = clock();
                double elapsed = double(end - start)/CLOCKS_PER_SEC;
                printf("Time measured: %.9f seconds.\n", elapsed);
                return 1;
            }
           
        }
    }
    clock_t end = clock();
    double elapsed = double(end - start)/CLOCKS_PER_SEC;
    printf("Time measured: %.9f seconds.\n", elapsed);
    return 0;
}


int main()
{
    int ints[]={1,2,5,10,52,90};
   
    arr(ints,1000000,10);
}
