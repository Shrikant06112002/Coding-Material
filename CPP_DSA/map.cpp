#include<bits/stdc++.h>
using namespace std;
int main(){
    map<int,string> m;
    m[1] = "love";
    m[5] = "ve";
    m[3] = "ab ";
    m.insert({6,"bhee"});
    for(auto i:m){
        cout << i.first << " " << i.second << endl;
    }                       
}