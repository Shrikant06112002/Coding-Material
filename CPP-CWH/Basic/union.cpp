#include<iostream>
using namespace std;
union money{
    int rice;
    char m;
    char car;
}
int main(){
    union money m1;
    m1.car ='b';
    m1.rice = 100;
return 0;
}