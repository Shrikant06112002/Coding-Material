#include<bits/stdc++.h>
using namespace std;
int main(){
    list<int> l;
    l.push_back(1);
    l.push_back(2);
    l.push_front(4);
    for(auto i:l){
        cout<<i;
    }
    cout<<endl;
    l.sort();
    l.reverse();
        for(auto i:l){
        cout<<i;
    }
    cout<<endl;
    l.insert(l.begin(),0);
    // l.insert(l.begin()+1,0); not working
    list<int>::iterator i=l.begin();
    advance(i,2);
    l.insert(i,6);
    for(auto i:l){
        cout<<i;
    }
    cout<<endl;



    return 0;
}