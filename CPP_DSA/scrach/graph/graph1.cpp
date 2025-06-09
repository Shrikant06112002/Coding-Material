#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void dfsRec(int start, vector<int> &dfsList, vector<int> adjList[], vector<bool> &vis)
{
    vis[start] = true;
    dfsList.push_back(start);
    for (int it : adjList[start])
    {
        if (!vis[it])
        {
            dfsRec(it, dfsList, adjList, vis);
        }
    }
}
vector<int> dfs(int start, int nodes, vector<int> adjList[])
{
    vector<int> dfsList;
    vector<bool> vis(nodes + 1, false);
    dfsRec(start, dfsList, adjList, vis);
    return dfsList;
}
vector<int> bfs(int start, int nodes, vector<int> adjList[])
{
    vector<int> bfsList;
    queue<int> queue;
    vector<bool> vis(nodes + 1, false);

    queue.push(start);
    vis[start] = true;
    while (!queue.empty())
    {
        int curr = queue.front();
        queue.pop();
        bfsList.push_back(curr);
        for (int it : adjList[curr])
        {
            if (!vis[it])
            {
                queue.push(it);
                vis[it] = true;
            }
        }
    }
    return bfsList;
}
int main()
{
    //   1 - 2
    //   |   |  5
    //   3 - 4
    int node = 5, edge = 6;
    vector<int> adjList[node + 1];

    // adjList[1].push_back(2);
    // adjList[1].push_back(3);

    // adjList[2].push_back(1);
    // adjList[2].push_back(5);
    // adjList[2].push_back(4);

    // adjList[3].push_back(1);
    // adjList[3].push_back(4);

    // adjList[4].push_back(2);
    // adjList[4].push_back(5);

    // adjList[5].push_back(2);
    // adjList[5].push_back(4);

    adjList[1] = {2, 3};
    adjList[2] = {1, 4, 5};
    adjList[3] = {1, 4};
    adjList[4] = {2, 3, 5};
    adjList[5] = {2, 4};

    vector<int> bfsList;
    bfsList = bfs(1, node, adjList);
    cout << " BFS" <<endl;
    for (int i : bfsList)
    {
        cout << i << "\t";
    }
    cout<<endl;
    cout << " DFS" <<endl;

    vector<int> dfsList;
    dfsList = dfs(1, node, adjList);
    for (int i : dfsList)
    {
        cout << i << "\t";
    }

    return 0;
}