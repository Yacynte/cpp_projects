/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
// Deggendorf Institute of Technology - vhb Exam
// Examination subject:     Programming in C++ / Part 1+2 (6 ECTS)
// Semester:                Summer 2023
// Examiner:                Prof. Dr. Peter Faber
// Score:                   90 Points
// Additional Materials:    None
// Duration:                90 Minutes

// ----- YOUR INFORMATION -----
// Street+House number:
// Surname, First name:
// Postcode + City:
// Matriculation number:
// E-Mail:
// ----------------------------

// 1. Basics                         	 			15 points
//
// 1.1 	Declare a class Candle with the following data members:
// 	Height (in cm) and color. Choose appropriate data types. Only derived classes can change these data members.
// 	Define for the class:
// 	a) Default constructor
// 	b) Parameterized constructor with member initialization list
// 	c) Member function "data_output" for outputting all data of the class. The member function "data_output" should be defined outside the class.
//
// 1.2 	Definition of member functions
// 	You know from experience that a candle loses an average of 2.5 cm in "height" every hour.
// 	Define a member function “update_height” with a parameter “burning_hours” and a suitable data type for it.
// 	The task of the member function is to update the "height" of the candle based on the hours.
// 	If the candle has burned down after the update, the user should get a corresponding message, 
// 	otherwise the user gets as the output the current height of the candle.
//
// 1.3 	Dynamic instantiation
// 	Define two dynamic objects of the class Candle. Since the values of the data members do not have to be queried, 
// 	they can be passed as static members. 
// 	Call the member function „data_output“ for the second instance and the member function „updateHeight“ for the first instance.

#include <iostream>
#include <string>
using namespace std;

    class Candle{
        public:
            void update_height(float burning_hours_);
            float addHeight(float height_);
            string addColor(string color_);
            void data_output();
        private:
            float Height=15;
            string color="blue";
            
    };
    float Candle::addHeight(float height_){
        return Height;
    }
    string Candle::addColor(string color_){
        return color;
    }

    void Candle::update_height(float burning_hours_){
        Height = Height - 2.5*burning_hours_;
        if(burning_hours_ == 0){
            cout<<Height<<endl;
        }
        else{cout<<"Candle burnt to "<<Height<<" cm"<<endl;}
        //return Height;
    }
        void Candle::data_output(){
        cout<<Height<<endl;
        cout<<color<<endl;
    }

int main()
{
    Candle batch;
    batch.data_output();
    
  //  Candle batch2;
    batch.update_height(2);
    



return 0;
}

