/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <string>
class Bicycle
{
   friend std::ostream& operator<<(std::ostream& out_ref, const Bicycle& bike_ref);
   public:
	Bicycle(const std::string& name_ref, unsigned int gear, bool motorized, double range):
	name_(name_ref), gear_max_(gear), motorized_(motorized), range_(range){current_gear_=1;};
	Bicycle operator++() ;
        Bicycle operator--(int) ;
	double operator<(const Bicycle& rhs_ref) const;
	double operator>(const Bicycle& rhs_ref) const;
	double operator!() const;
	std::string name() const { return name_;};
	unsigned int current_gear() const { return current_gear_;};
	unsigned int gear_max() const { return gear_max_;};
    double range() const { return range_;}
	bool motorized() const { return motorized_;};
   private:
	std::string name_;
	unsigned int gear_max_;
	unsigned int current_gear_;
	double range_;
	bool motorized_;
};

// Task 1
std::ostream& operator<<(std::ostream& out_ref, const Bicycle& bike_ref)
{
    // Your code here; implement as specified in the description.
    if(bike_ref.motorized()){
    out_ref<<"Type: E-bike"<<" "<<bike_ref.name()<<" "<<bike_ref.gear_max()<<" "<<bike_ref.range()<<std::endl;
    }
    else{
     out_ref<<"Type: Conventional"<<" "<<bike_ref.name()<<" "<<bike_ref.gear_max()<<std::endl;  
    }
    return out_ref;
   
}

//Task 2
Bicycle Bicycle::operator--(int)
{
    // Your code here; implement as specified in the description.
    if(current_gear()>1){
  this->current_gear_ = -1;
    }
    return Bicycle;
}



int main(void)
{
    Bicycle bicycle1("Fischer", 9, true, 85.3), bicycle2("Haibike", 15, false, 88.9);
    std::cout << bicycle1;
        ++bicycle1;
    std::cout << (++bicycle1).current_gear() << std::endl;
    std::cout << (bicycle1--).current_gear() << std::endl;


    return 0;
}
