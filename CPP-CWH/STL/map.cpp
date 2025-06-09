#include<bits/stdc++.h>
using namespace std;

int main(){
    // map<string,int> m1;
    // m1.insert(pair<string,int>("abc",2));  //method1
    // m1["ab"] = 5;
    // for(auto  it:m1){
    //     cout<<it.first<<" "<<it.second;
    //     cout<<endl;
    // }
    
    // map<int,pair<int,int>> m2;
    // m2[1]={1,2};
    // m2[3]={5,6};
    // for(auto it=m2.begin();it!=m2.end();it++){
    //     cout<<it->first<<" "<<it->second.first;
    //     cout<<endl;
    // }

    map<pair<int,int>,int> m3;
    m3[{1,2}]=2;
    m3[{1,2}]=3;
    m3[{1,2}]=4;
    m3[{1,3}]=2;

    for(auto it:m3){
        cout<<it.first.first;
    }
return 0;
}