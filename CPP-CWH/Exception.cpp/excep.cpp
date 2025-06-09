#include<iostream>
using namespace std;

int main(){
    int a=10,b=0;
    int ans;
    // cout << "hii";
    try{
        if(b==0) throw ("divide by 0\n");
        ans = a/b;
    }catch(exception& e){
        cerr << e.what() <<endl;
    }
return 0;
}