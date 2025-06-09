#include<iostream>
#include<vector>
using namespace std;

template <class T>
void display(vector<T> &v){
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<"\t";
    }
    cout<<endl;
    
}
int main(){
    vector<int> vec1;
    int ele;
    vec1.push_back(1);
    vec1.push_back(2);
    vec1.push_back(3);
    vec1.push_back(4);
    vec1.pop_back();

    // display(vec1);

    // vector<char> vec2(4); //4ele vector
    // display(vec2);

    // vector<int> vec3(5,8);
    // display(vec3);

    // vector<int> vec4(10,-1);
    // display(vec4);

        vector<int> vec6(10);
    display(vec6);

    // vector<int> vec5(vec3);
    // display(vec5);

    //itertor
    vector<int> :: iterator iter = vec1.begin();
    vec1.insert(iter+1,2);
    vec1.insert(vec1.begin()+1,2);

 

    display(vec1);


    
    
return 0;
}