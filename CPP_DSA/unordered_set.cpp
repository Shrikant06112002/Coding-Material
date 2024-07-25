#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> v = {1,1,1,1,2,3,4,4,4,4};
    unordered_map<int,int> m;
    for(int i:v){
        if(m.count(i)){
            m[i]++;
        }else{
            m[i]=1;
        }
    }
    int max = INT_MIN;
    int ans =-1;
    for(auto i:m){
        cout << i.first << " " << i.second << endl;
        if(max<=i.second){
            max = i.second;
            ans= i.first;
        }
    }
    cout<< ans;
    return 0;
}