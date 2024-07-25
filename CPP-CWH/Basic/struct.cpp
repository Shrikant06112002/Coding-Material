#include<iostream>
using namespace std;
struct employee{
    int id;
    char name;
    float sal;
};
typedef struct employee2{
    int id;
    char name;
    float sal;
} ep;
int main(){
    ep s2;
    struct employee s;
    s.id =1;
    s.name = 's';
    s2.id=2;
    cout<<s.id<<endl;
    cout<<s2.id<<endl;


return 0;
}