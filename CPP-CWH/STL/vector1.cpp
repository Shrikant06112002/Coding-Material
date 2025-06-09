#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> v; //empty conatiner
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);

    v.emplace_back(4); //dynamicly allocated and add

    vector<pair<int,int>> vec;
    vec.push_back({1,2});
    vec.emplace_back(1,3);

    vector<int> v2(5,100);
    vector<int> v3(v2);

    //itertaors
    // vector<int> :: iterator it=v.begin();
    // cout<<*it<<endl;
    // it++;
    // cout<<*it<<endl;

    // vector<int>:: iterator it1=v.end();
    // it1--;
    // cout<<*it1<<endl;
    // it1--;
    // cout<<*it1<<endl;

    // vector<int>:: iterator it1=v.rend();
    // cout<<*it1<<endl;
    // it1--;
    // cout<<*it1<<endl;

    //acess
    // cout<<v[0]<<" "<<v.at(0)<<endl;

    // for (vector<int>::iterator  i = v.begin(); i != v.end(); i++){
    //     cout<<*i<<endl;
    // }
    // for (auto  i = v.begin(); i != v.end(); i++){
    //     cout<<*i<<endl;
    // }


    //Erase
    v.erase(v.begin());
    v.erase(v.begin()+1,v.begin()+2);

    // //insert
    // v.insert(v.begin(),100);
    v.insert(v.begin(),2,100);


    for (auto i:v)
    {
        cout<<i<<endl;
    }



    

    


return 0;
}