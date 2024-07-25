#include <bits/stdc++.h>
using namespace std;
struct comp
{
    constexpr bool operator()(pair<int, int> const &a, pair<int, int> const &b)
        const noexcept
    {
        return a.second < b.second;
    }
};
int main()
{
    priority_queue<int> maxi;
    priority_queue<int, vector<int>, greater<int>> mini;
    maxi.push(1);
    maxi.push(2);
    maxi.push(3);
    maxi.push(4);
    // for(auto i:maxi){ // not working

    // // }
    int n = maxi.size();
    for (int i = 0; i < n; i++)
    {
        cout << maxi.top() << endl;
        maxi.pop();
    }

    cout << endl;
    mini.push(1);
    mini.push(2);
    mini.push(3);
    mini.push(4);
    int n2 = mini.size();
    for (int i = 0; i < n2; i++)
    {
        cout << mini.top() << endl;
        mini.pop();
    }

    // 2 element
    priority_queue<pair<int, int>> max1; // this are sorting the elements according 1st;
    max1.push(make_pair(10, 2));
    max1.push(make_pair(3, 4));
    max1.push(make_pair(5, 7));
    max1.push(make_pair(6, 8));

    while (!max1.empty())
    {
        int first = max1.top().first;
        int second = max1.top().second;
        cout << first << " " << second << endl;
        max1.pop();
    }

    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> min1;
    // this are sorting the elements according 1st;
    // priority_queue<pair<int,int>,vector<pair<int,int>>,comp > min1;
    // this are sorting the elements according 2st;

    min1.push(make_pair(10, 2));
    min1.push(make_pair(3, 4));
    min1.push(make_pair(5, 7));
    min1.push(make_pair(6, 8));

    while (!min1.empty())
    {
        int first = min1.top().first;
        int second = min1.top().second;
        cout << first << " " << second << endl;
        min1.pop();
    }

    return 0;
}