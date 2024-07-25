#include<iostream>
#include<bits/stdc++.h> // sab aa jata
using namespace std;
int main(){
    //deque
    deque<int> d;
    d.push_back(1);
    d.push_back(2);
    d.push_front(3);
    for(auto i:d){
        cout<<i;
    }
    d.pop_front();
    cout<<endl;
        for(auto i:d){
        cout<<i;
    }
    cout<<endl;
    cout<< d.at(1)<<endl;
    d.erase(d.begin(),d.begin()+1);
    cout<<endl;
        for(auto i:d){
        cout<<i;
    }
    cout<<endl;
    return 0;
}