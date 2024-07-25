#include <iostream>
using namespace std;
int add(int a,int b){
    return a+b;
}
class Employee{
    public:
        string name;
        int salary;
        Employee(string name,int salary){
            this->name = name;
            this->salary = salary;
        }
    void print(){
        cout << this->name << " " << this->salary <<endl;
    }

};
int main(){
    // cout <<"hello world"<<endl;

    // //data types
    // int a,b,c;
    // short sa = 9;
    // int d;
    // float f;
    // long long dl;
    // double du;
    // char ac='a';
    // long al;
    // string st = "harrryyy";
    // cout<< a<< " " << b << "" << sa <<endl;
    // cout<<sizeof(du);
    // cout<<sizeof(dl);
    // cout<<sizeof(a);
    // cout<<sizeof(sa);
    // cout<<sizeof(ac);
    // cout<<sizeof(al);
    // cout<<sizeof(st);


    // //type casetinf
    // cout<<endl;
    // cout<<a/b<<endl;
    // cout<<(float)a/b<<endl;

    // // //if else
    // // int age;
    // // cin>> age;
    // // cout << "age is the "<< age<<endl;
    // // if(age<18){
    // //     cout<<"nice";
    // // }else if(age>9){
    // //     cout<<"nice";
    // // }

    // //loop same as c

    // //function
    // cout<<"the sume is"<< add(1,2)<<endl;

    // //array
    // int arr[3];
    // cout<<arr[1]<<endl;

    // //strinf
    // string str = "shrikant";
    // cout<<str<<endl;
    // cout<<str.length()<<endl;
    // cout<<str.substr(0,3)<<endl;
    // string nstr = str.substr(0,4);
    // cout<<nstr<<endl;

    //pointer
    int a = 34;
    int *ptr; // dynmaic size allocatiion
    ptr = &a;
    cout<<a<<endl;
    cout<<ptr<<endl;
    cout<<*ptr<<endl;

// //    neww class
    Employee e("shri",100);
    // e.name = "Employee";
    // e.salary = 100;
    e.print();

//     cout<<e.salary<<endl;
// cout<<e.name<<endl;
    return 0;
}
