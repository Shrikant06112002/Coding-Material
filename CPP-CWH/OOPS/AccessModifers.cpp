#include<iostream>
using namespace std;
class Employee{
    private:
        int a,b,c;
    public:
        int d,e;
        void setData(int a,int b,int c);
        void getData(){
            cout<<"the value of a is"<<a<<endl;
            cout<<"the value of b is"<<b<<endl;
            cout<<"the value of c is"<<c<<endl;
            cout<<"the value of d is"<<d<<endl;
            cout<<"the value of e is"<<e<<endl;
        }
};
void Employee :: setData(int a1,int b1,int c1){
    a=a1;
    b=b1;
    c=c1;
}
int main(){
    Employee shri;
    shri.setData(1,2,4);
    // shri.a=101; // is not possible beacus oits private
    shri.d=10;
    shri.e=111;
    shri.getData();
return 0;
}