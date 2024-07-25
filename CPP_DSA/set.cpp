#include<bits/stdc++.h>
using namespace std;
int main(){
    set<int> s;
    s.insert(1);
    s.insert(2);
    s.insert(3);
    s.insert(3);
    s.insert(3);
    s.insert(6);
    for(auto i:s){
        cout<<i;
    }
    // s.erase(s.begin());
    // s.erase(s.begin()+1);//not allpw
    set<int>::iterator i = s.begin();
    advance(i,1);
    s.erase(i);
    cout<<endl;
        for(auto i:s){
        cout<<i;
    }
    cout<<endl;
    cout<< s.count(1);
    set<int>:: iterator i2 = s.find(1);
    cout<<*i2;

    return 0;
}