// OOPs - Classes and objects

// C++ --> initially called --> C with classes by stroustroup
// class --> extension of structures (in C)
// structures had limitations
//      - members are public
//      - No methods
// classes --> structures + more
// classes --> can have methods and properties
// classes --> can make few members as private & few as public
// structures in C++ are typedefed
// you can declare objects along with the class declarion like this:
/* class Employee{
            // Class definition
        } harry, rohan, lovish; */
// harry.salary = 8 makes no sense if salary is private

// Nesting of member functions

#include<iostream>
#include<string>
using namespace std;
class Binary{
    private:
        string s;
        void chk_bin(void);
    public:
        void read(void);
        void display(void);
        void ones(void);

};
void Binary :: read(void){
    cout<<"enter a binary number";
    cin>>s;
}
void Binary :: display(void){
    for (int i = 0; i < s.length(); i++)
    {
        cout<<s.at(i);
    }
    cout<<endl;
}
void Binary :: chk_bin(void){
    for(int i=0;i<s.length();i++){
        if(s.at(i) !='0' && s.at(i)!='1'){
            cout<<"incorrect binary format";
            break;
        }
    }
}
void Binary :: ones(void){
        for(int i=0;i<s.length();i++){
        if(s.at(i) !='1' ){
            s.at(i) = '1';
        }
        else if (s.at(i) == '1')
        {
            s.at(i) = '0';
        }
        
    }
}
int main(){
    Binary b;
    b.read();
    b.display();
    // b.chk_bin(); we can't this function beacuse its private it can only use in the 
    b.ones();
    b.display();
return 0;
}