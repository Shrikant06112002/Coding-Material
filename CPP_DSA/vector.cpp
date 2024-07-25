#include<iostream>
#include<array>
#include<vector>
using namespace std;
int main(){
    
    // Vector
    // vector<int> a;
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
    // a.push_back(1);
    // a.push_back(3);
    // a.push_back(4);
    // a.push_back(5);

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

    // //earse
    // for(auto i:a){
    //     cout<<i;
    // }
    // cout<<endl;
    // // a.erase(a.begin());
    // // a.erase(a.begin()+1);
    // //     cout<<"Earse"<<endl;
    // // for(auto i:a){
    // //     cout<<i;
    // // }
    // a.erase(a.begin(),a.end()-2);
    // for(auto i:a){
    //     cout<<i;
    // }


 // 2d vector
//  vector<vector<int>> vec(4);
//  vector<int> temp;
//  vec[0].push_back(10);
//  vec[0].push_back(1);
//  vec[0].push_back(0);

//  vec[1].push_back(20);
//  vec[1].push_back(2);

//  vec[2].push_back(20);
//  vec[3].push_back(2);


//  for(int i=0;i<vec.size();i++){
//     for(int j=0;j<vec[i].size();j++){
//         cout<<vec[i][j]<<" ";
//     }
//     cout<<endl;
//  }
    

    // but in that we have to provide fix size
    vector<vector<int>> vec2;
    vector<int> temp;
    temp.push_back(10);
    temp.push_back(1);
    temp.push_back(0);
    vec2.push_back(temp);
    temp.clear();
     for(int i=0;i<vec2.size();i++){
        for(int j=0;j<vec2[i].size();j++){
            cout<<vec2[i][j]<<" ";
        }
        cout<<endl;
    }

    // for user intput
    int r=3,c=2;
    vector<vector<int>> vec3(r,vector<int>(c));
    for (int i = 0; i < r; i++)
    {
        for(int j = 0; j < c; j++){
            cin >> vec3[i][j];
        }
    }
    for (int i = 0; i < r; i++)
    {
        for(int j = 0; j < c; j++){
            cout << vec3[i][j];
        }
        cout << endl;
    }
    
    


    return 0;
}