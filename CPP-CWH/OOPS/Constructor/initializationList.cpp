#include<iostream>
using namespace std;

class Test
{
    int a;
    int b;

public:
    Test(int i, int j) : a(i), b(j)
    {
        cout << "Constructor executed"<<endl;
        cout << "Value of a is "<<a<<endl;
        cout << "Value of b is "<<b<<endl;
    }
    Test(int i, int j) : b(j), a(i+b)
    Test(int i, int j) : a(i), b(a + j)
};

int main()
{
    Test t(4, 6);
    
    return 0;
}


