#include<iostream>
using namespace std;
class Complex; //forward passing
class Calucaltor{
    public:
    int add(int a,int b){
        return a+b;
    }
    int addCom(Complex o1 ,Complex o2);
    // int addCom(Complex o1,Complex o2){ // he dosen't knows whats a and b
    //     return (o1.a+o2.b);
    // }
};
class Complex{
    int a,b;
    //Indivalully declare
    // friend int Calucaltor::addCom(Complex o1,Complex o2);
    //declare all entire calucaltor as freind
    friend class Calucaltor;
    public:
        void setNumber(int n1,int n2){
            a=n1;
            b=n2;
        }
        void display(void){
            cout<<"the complex number is "<<a<<"+"<<b<<"i"<<endl;
        }
};
int Calucaltor::addCom(Complex o1,Complex o2){
        return (o1.a+o2.a);
}
int main(){
    Complex c1,c2;
    c1.setNumber(1,2);
    c2.setNumber(3,4);
    c1.display();
    c2.display();
    Calucaltor cal;
    int ans=cal.addCom(c1,c2);
    cout<<ans;

    return 0;
}