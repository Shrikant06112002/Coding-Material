#include<iostream>
using namespace std;

class Base{
    protected:
        int a=10; 
    private:
        int b;

};

class Derived: protected Base{
    public:
        void getData(){
            cout<<a;
            count<<b;
        }
};

int main(){
    Base b;
    Derived d;
    d.getData();
    // cout<<d.a; // Will not work since a is protected in both base as well as derived class
    return 0;
}

