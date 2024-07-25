#include<iostream>
using namespace std;

int main(){
    int a=6;
    int *b=&a;
    cout<<a<<endl;
    cout<<b<<endl;
    cout<<*b<<endl;
    cout<<&b<<endl;
    cout<<&a<<endl;
    
    int **c=&b;
    cout<<c<<endl;
    cout<<*c<<endl;
    cout<<**c<<endl;

    int ***d=&c;
    cout<<d<<endl;





return 0;
}