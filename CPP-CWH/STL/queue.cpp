#include<bits/stdc++.h>
using namespace std;
int main(){
    queue<int> s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);

    cout<<s.front();
    cout<<s.back();


    s.pop();
    return 0;
}