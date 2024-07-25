#include<bits/stdc++.h>
using namespace std;
int main(){
    stack<string> s;
    s.push("a");
    s.push("b");
    s.push("c");

    // cout<<s.pop()<<endl;
    s.pop();
    cout<<s.top()<<endl;
    cout<<s.size()<<endl;
    cout<<s.empty()<<endl;



    return 0;
}