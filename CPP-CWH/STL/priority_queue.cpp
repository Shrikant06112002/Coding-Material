#include<bits/stdc++.h>
using namespace std;

int main(){
    priority_queue<int> p;
    p.push(1);
    p.push(2);
    p.push(3);
    p.push(4);

    // for(auto i:p){ not allow
    //     cout<<i<<endl;
    // }
     while (!p.empty())
     {
        cout<<p.top()<<endl;
        p.pop();
     }
     
    priority_queue<int,vector<int>,greater<int>> pq;
    pq.push(1);
    pq.push(2);
    pq.push(3);
    pq.push(4);
     while (!pq.empty())
     {
        cout<<pq.top()<<endl;
        pq.pop();
     }



return 0;
}