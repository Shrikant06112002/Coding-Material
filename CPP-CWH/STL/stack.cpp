#include<bits/stdc++.h>
using namespace std;
int main(){
    stack<int> s;
    s.push(1);
    s.push(1);
    s.push(1);
    s.push(1);

    cout<<s.top();
    s.pop();
    return 0;
}