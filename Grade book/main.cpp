/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;

class GradeBook{
    public:
    string getCourseName() const ;
    string setCousreName(string cousre_name);
    void displayMessage() const ;
    string getCousreInstructorName() const;
    string setCousreInstructorName(string instructor_name);
    
    
    private:
    string course_name;
    string instructor_name;
};

    string GradeBook::setCousreName(string name){
        course_name = name;
    }
    
    string GradeBook::setCousreInstructorName(string iname){
        instructor_name = iname;
    }
    
    string GradeBook::getCourseName() const {
        return course_name;
    }
    
    string GradeBook::getCousreInstructorName() const {
        return instructor_name;
    }
    
    
    void GradeBook::displayMessage() const {
        cout<<"Welcome to the grade book of "<<getCourseName() <<" !"
            <<"This  course is presented by: "<<getCousreInstructorName() <<endl;
    }

int main()
{
     //cout<<"course name"<<endl;
     string x;
     cin>>"Couse Name">>x>>endl;
     //cin>>"Prof's name">>setCousreInstructorName()>>endl;
     
     GradeBook batcho;
     
        batcho.setCousreName(x);
        batcho.setCousreInstructorName("Dr. Me");
        batcho.getCousreInstructorName();
        batcho.getCourseName();
        batcho.displayMessage();
  
    return 0;
}


