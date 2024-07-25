#include<iostream>
using namespace std;

class Employee{
    int id;
    int salary;
    public:
        void setId(void){
            salary=122;
            cout<<"Enter the salary of the employee"<<endl;
            cin>>id;
        }
        void getId(void){
            cout<<"the id od this employee is"<<id<<endl;
        }
};

int main(){
//     Employee shri,kant,shreya;
//     shri.setId();
//     shri.getId();
//     shreya.setId();

    Employee fb[4];
    for (int i = 0; i < 4; i++)
    {
        fb[i].setId();
        fb[i].getId();
    }
    
return 0;
}