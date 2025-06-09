#include<iostream>
using namespace std;

class Animal{
public:
    Animal(){};
    ~Animal(){};
    virtual void sound()=0;
};

class Dog : public Animal{
public:
    Dog(){};
    ~Dog(){};
    void sound(){
        cout << " boo boo " << endl;
    }
};

class Cat : public Animal{
public:
    Cat(){};
    ~Cat(){};
    void sound(){
        cout << " maww maww " << endl;
    }
};
int main(){
    // string res="abba";
    Dog *ptr = new Dog();
    ptr->sound();

return 0;
}