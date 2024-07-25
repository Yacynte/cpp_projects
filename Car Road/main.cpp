/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;

class Road{
    public:
        Road();
        Road(int slimit_);
        void setSpeedLimit(int limit);
        int getSpeedLimit() const;
    private:
        int slimit_;
        friend class Vehicle;
};

    Road::Road(){
        slimit_=0;
    }
    Road::Road(int speedlimit_){
        speedlimit_=slimit_;
    }
    void Road::setSpeedLimit(int limit){
        if(limit<0){
            cout<<"No negattive speed limit"<<endl;
        }
        else{
            slimit_=limit;
        }
        
    }
    int Road::getSpeedLimit() const{
        return slimit_;
    }
    
    
class Vehicle : public Road{
    public:
        Vehicle(int maxspeed, Road curroad);
        void changeRoad(Road newroad);
        int getSpeed() const;
        void setSpeed(int newspeed);
    private:
        int curspeed_ , maxspeed_;
        Road curroad_;
};
    Vehicle::Vehicle(int maxspeed, Road curroad){
        curspeed_=0;
        maxspeed_=maxspeed;
        changeRoad(curroad);
    }
    void Vehicle::changeRoad(Road newroad){
        curroad_=newroad;
        if(curspeed_>slimit_){
            cerr<<"Current speed exeeds speed limit"<<endl;
        }
    }
    void Vehicle::setSpeed(int newspeed) {
        curspeed_=newspeed;
        if(curspeed_>maxspeed_){
            cerr<<"Current speed exeeds vehicle's speed limit"<<endl;
        }
        if(curspeed_>slimit_){
            cerr<<"Current speed exeeds road speed limit"<<endl;
        }
    }
    int Vehicle::getSpeed()const{
        return curspeed_;
    }
    

int main(void)
{
    Road r66 = Road(60);
    Vehicle car = Vehicle(100, r66);
    cout<<car.getSpeed()<<endl;
    try{
        r66.setSpeedLimit(-10);
    }
    catch(std::exception e){
        cout<<e.what()<<endl;
    }
    try{
        car.setSpeed(70);
    }
    catch(std::exception e){
        cout<<e.what()<<endl;
    }
    
    return 0;
}
