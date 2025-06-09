#include<bits/stdc++.h>
using namespace std;

int main(){
    deque<char> l;
    l.push_back('1');

    l.push_front('2');

    // for(auto i:l){
    //     cout<<i;
    // }
    // l.pop_back();
    // l.pop_front();
    // for(auto i:l){
    //     cout<<i;
    // }
    cout<<l.front();
    for(auto i:l){
        cout<<i;
    }

return 0;
}