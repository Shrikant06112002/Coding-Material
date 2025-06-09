#include<bits/stdc++.h>
using namespace std;

class Student{
    public:
    int id;
    string name="";
    int marks;
    Student(int id,string name,int marks){
        this->id=id;
        this->name=name;
        this->marks=marks;
    }
    bool operator<(const Student& other) const{
        return marks > other.marks;
    }

};

// compartor for pairs
struct CustomCompare{
    bool operator()(const pair<int,int> &p1,const pair<int,int> &p2){
        return p1.second > p2.second;
    }
};
int main(){
    priority_queue<Student> pq;
    pq.push(Student(101,"shrikant",100));
    pq.push(Student(102,"shr",101));
    pq.push(Student(103,"shrik",10));
    pq.push(Student(104,"shkant",105));

    while (!pq.empty())
    {
        Student curr = pq.top();
        cout<<curr.id<<" "<<curr.name<<" "<<curr.marks<<endl;
        pq.pop();
    }

    //using pair
    priority_queue<pair<int,int>> pq1; // by defalut descending
    pq1.push({1,20});
    pq1.push({2,10});
    pq1.push({3,30});

    while (!pq1.empty())
    {
        cout<<pq1.top().first<<" "<<pq1.top().second<<endl;
        pq1.pop();
    }

    priority_queue<pair<int,int>,vector<pair<int,int>>,CustomCompare> pq2; 
    pq2.push({1,20});
    pq2.push({2,10});
    pq2.push({3,30});

    while (!pq2.empty())
    {
        cout<<pq2.top().first<<" "<<pq2.top().second<<endl;
        pq2.pop();
    }
    
return 0;
}