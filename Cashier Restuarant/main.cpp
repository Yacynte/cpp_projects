/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;

class Cashier{
    
    private:
    double total_;
    
    
    public:
    
    double  clear();
    double addItem(double price) ;
    double getTotal() const;
   
};
    double Cashier::clear(){
        total_=0;
    }
    
    double Cashier::addItem(double price){
        total_=total_+price;
    }
    
    double Cashier::getTotal() const {
        return total_;
    }


int main()
{
    int x;
    Cashier batcho;
    batcho.clear();
    double price;
    cout<<"Enter price of Item:"<<endl;
    cin>>price;
    batcho.addItem(price);
    while(price!=0){
    cout<<"Enter price of Item:"<<endl;
    cin>>price;
    batcho.addItem(price);
    }
    cout<<"Total cost is: "
        <<"EUR "<<batcho.getTotal()<<endl;
    
    return 0;
}


