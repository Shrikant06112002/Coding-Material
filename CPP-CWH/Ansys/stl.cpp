#include<bits/stdc++.h>
using namespace std;

// struct Pair{
//     int x,y,c;
//     Pair(int x,int y){
//         this->x=x;
//         this->y=y;
//     }
// };

// union Pair{
//     int x,y,c;
//     Pair(int x,int y){
//         this->x=x;
//         this->y=y;
//     }
// };

// union Pair{
//     int x,y,c;
//     Pair(int x,int y){
//         this->x=x;
//         this->y=y;
//     }
// };

// enum Days{
//     sunday,
//     monday,
//     tuesday
// };

// class Pair{
//     int x,y;
//     long z;
// };
class Student{
public:
    string name;
    int rollNo;
    long fees;
    Student(string name,int rollNo,int fees){
        this->rollNo=rollNo;
        this->fees=fees;
        this->name=name;
    }
    bool operator<(const Student obj) const{
        return this->rollNo < obj.rollNo;
    }
};

int main(){
    // Pair a;
    // // cout<<a.x;

    // // Days today = monday;
    // // cout << today <<endl;
    // cout << sizeof(a) <<endl;

    // vector<int> v;
    // v.push_back(10);
    // v.push_back(20);
    // v.push_back(30);
    // v.push_back(40);

    // // v.pop_back();

    // // cout<<v[0];

    // vector<int>::iterator it:v.begin();





    // pair<int,int> p ={1,3};
    // cout << p.first <<"\t" <<p.second;

    // vector<pair<int,int>> v;
    // v.push_back(make_pair(1,2));
    // v.push_back({1,2});

    // for(auto i:v){
    //     cout<< i.first << "\t";
    // }

    // list<int> l;
    // l.push_back(1);
    // cout<< l.size();

    // stack<int> s;
    // s.push(1);
    // s.push(2);

    // priority_queue<int> q;
    // q.push(1);
    // q.push(2);
    // q.push(3);
    // q.push(4);

    // cout<<q.top();

    // priority_queue<int,vector<int>,greater<int>> minHeap;
    // minHeap.push(5);
    // minHeap.push(15);
    // minHeap.push(50);
    // minHeap.push(7);

    // cout<<minHeap.top();

    // priority_queue<Student> q;
    // q.push(Student("shri",8,100));
    // q.push(Student("shrika",1,100));
    // q.push(Student("shrikant",10,100));

    // while (!q.empty())
    // {
    //     /* code */
    //     Student curr = q.top();
    //     q.pop();
    //     cout<< curr.rollNo << " " <<curr.name << " " <<curr.fees <<endl;
    // }

    // set<int> s; //uniqie and sorted
    // s.insert(1);
    // s.insert(6);
    // s.insert(4);
    // s.insert(9);

    // for(auto i:s){
    //     cout << i <<endl;
    // }

    // unordered_set<int> s; //unique not sorted
    // s.insert(1);
    // s.insert(6);
    // s.insert(4);
    // s.insert(9);
    // s.insert(9);


    // for(auto i:s){
    //     cout << i <<endl;
    // }

    // multiset<int> s; //not unique sorted
    // s.insert(9);
    // s.insert(1);
    // s.insert(6);
    // s.insert(4);
    // s.insert(9);
    // s.insert(9);


    // for(auto i:s){
    //     cout << i <<endl;
    // }

    // map<int,int> m;
    // m.insert(make_pair(10,20));
    // m.insert(make_pair(1,2));
    // m.insert(make_pair(1,20));

    // for(auto i:m){
    //     cout <<i.first << "  " << i.second <<endl;
    // }


    // unordered_map<int,int> m;
    // m.insert(make_pair(10,20));
    // m.insert(make_pair(1,2));
    // m.insert(make_pair(1,20));

    // for(auto i:m){
    //     cout <<i.first << "  " << i.second <<endl;
    // }

    multimap<int,int> m;
    m.insert(make_pair(10,20));
    m.insert(make_pair(1,2));
    m.insert(make_pair(1,20));

    for(auto i:m){
        cout <<i.first << "  " << i.second <<endl;
    }




    





    return 0;
}