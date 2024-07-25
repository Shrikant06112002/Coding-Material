#include<iostream>
using namespace std;
class Employee{ //base class                                    
    public:
    int id; 
    float sal;
    Employee(){}
    Employee(int ID){
        id = ID;
        sal = 32.0;
    }
};

//derived class
// class derived-class-name : visibility-mode base-class-name

class Progr : public Employee {
    public:
        int code=0;
        Progr(int impID){
            id=impID;
        }
        void getData(){
            cout<<id<<endl;
        }
};
int main(){
    Employee shri(1),ron(2);
    Progr p(10);
    // cout<<p.code;
    cout<<p.id<<endl;// by defalut visibilty private ahe so aapn acees nahi karu shakte
    p.getData();
    // cout<<shri.sal;
return 0;
}