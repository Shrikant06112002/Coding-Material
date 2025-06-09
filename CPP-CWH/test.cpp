#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    string str = "rescue"; // secure
    string str2 = "secure";
    unordered_set<char> us1;
    unordered_set<char> us2;

    for(char c:str){
        us1.push(c);
    }
    for(char c:str2){
        us2.push(c);
    }
    if(us1.size()!=us2.size()){
        cout << "the string is not anangram" <<endl;
        return 0;
    }
    for(char it:us1){
        if(us2.find(it)==us2.end()){
            cout << "the string is not anangram" <<endl;
            return;
        }
    }

    cout << "The string is the anangram";




    return 0;
}