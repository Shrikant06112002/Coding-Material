#include<bits/stdc++.h>
using namespace std;

int main(){
    // set<int> s;  //unique and sorted
    // s.insert(1);
    // s.insert(1);
    // s.insert(2);
    // s.insert(3);
    // auto it = s.find(5);
    // if(it==s.end()){
    //     cout<<"ele not found";
    // }

    multiset<int> ml; //not unique and sorted
    ml.insert(1);
    ml.insert(1);
    ml.insert(1);
    ml.insert(1);
    ml.insert(2);

    ml.erase(ml.find(1));
    // ml.erase(ml.find(1),ml.find(1)+2);

    for(auto i:ml){
        cout<<i;
    }    

    // //unorder_set 
    unordered_set<int> s;//unique and not sorted
    



return 0;
}