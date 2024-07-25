#include<iostream>
#include<array>
#include<vector>
using namespace std;
int main(){
    // //Array
    // int b[] ={1,2,3};
    // array<int,4> a = {1,2,3,4}; //static int the size

    // cout<<a.size()<<endl;
    // cout<<a[1]<<endl;
    // cout<<a.at(2)<<endl;
    // cout<<a.empty()<<endl;
    // cout<<a.begin()<<endl;
    // cout<<a.front()<<endl;
    // cout<<a.back()<<endl;

    // Vector
    vector<int> a;
    // vector<int> b(5,1); 
    // vector<int> l(a); /// for copy the vector
    // for(auto i:b){
    //     cout<<i;
    // }
    // cout<<endl;
    // cout<<b.capacity()<<endl;
    // cout<<b.size()<<endl;
    // b.push_back(9);
    // cout<<b.capacity()<<endl;
    // cout<<b.size()<<endl;
    // cout<<a.size() <<endl;
    a.push_back(1);
    a.push_back(3);
    a.push_back(4);
    a.push_back(5);

    // cout<<a.size()<<endl;
    // a.push_back(2);
    // cout<<a.at(0)<<endl;
    // cout<<a[3]<<endl;
    // cout<<a.front()<<endl;
    // cout<<a.back()<<endl;

    // //print hole vector
    // cout<<"before pop the elements of the hole vector";
    // for(auto i:a){
    //     cout<<i;
    // }
    // cout<<endl;
    // a.pop_back();
    // // a.pop_back(2); not allowed

    // cout<<"before pop the elements of the hole vector";
    // for(auto i:a){
    //     cout<<i;
    // }
    // cout<<"before pop the elements of the hole vector";
    // for(auto i:a){
    //     cout<<i;
    // }
    // //insert and remove
    // cout<<endl;
    // a.insert(a.begin(), 5);
    // a.insert(a.begin()+2, 9);
    // // a.insert(a.back(),6); // not woek
    // cout<<"insert";

    // vector<int> original{ 1, 2, 3, 4, 5 }; 
  
    // vector<int> temp{ 2, 5, 9, 0, 3, 10 }; 
  
    // // Printing out the original vector 
    // cout << "Original vector :\n"; 
    // for (auto x : original) 
    //     cout << x << " "; 
    // cout << endl; 
  
    // original.insert(original.begin() + 3, temp.begin() + 2, 
    //                 temp.begin() + 5); 
  
    // // Printing the modified vector 
    // cout << "Vector after Inserting the portion of temp "
    //         "vector in original vector :\n"; 
    // for (auto x : original) 
    //     cout << x << " ";
    // for(auto i:a){
    //     cout<<i;
    // }

    //earse
    for(auto i:a){
        cout<<i;
    }
    cout<<endl;
    // a.erase(a.begin());
    // a.erase(a.begin()+1);
    //     cout<<"Earse"<<endl;
    // for(auto i:a){
    //     cout<<i;
    // }
    a.erase(a.begin(),a.end()-2);
    for(auto i:a){
        cout<<i;
    }

    

    



    







    return 0;
}