#include<iostream>
#include<bits/stdc++.h> // sab aa jata
using namespace std;
int main(){
    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(4);
    v.push_back(3);
    cout << binary_search(v.begin(),v.end(),1) << endl;

    //finding the iteror
    cout<< max(1,2);
    // swap(a,b);
    string s = "abcd";
    reverse(s.begin(),s.end());
    cout<<s<<endl;


    rotate(v.begin(),v.begin()+1,v.end());

    sort(v.begin(),v.end());
    sort(a.begin(),a.end(),greater<int>());

}