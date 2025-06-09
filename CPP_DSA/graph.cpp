#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n=5,m=6; //node and edeges
    // int adjMat[n+1][n+1];
    int u,v;
    // for (int i = 0; i < m; i++)
    // {
    //     cin>> u >> v;
    //     adj[u][v] = 1;
    //     adj[v][u] = 1;
    // }


    //adjlist
    vector<int> adjList[m+1];
    for (int i = 0; i < m; i++)
    {
        cin>> u >> v;
        adjList[u].push_back(v);
        adjList[v].push_back(u);
    }

    for(auto ar:adjList){
        for(int i:ar){
            cout <<i << "\t";
        }
        cout<<endl;
    }
    
    return 0;
}