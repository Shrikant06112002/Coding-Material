#include<bits/stdc++.h>
using namespace std;
int r=-1,f=-1;
int arr[5];
bool isEmpty(){
    if(r==f){
        return true;
    }
    return false;
}
bool isFull(){
    if(f>=5-1){
        return true;
    }
    return false;
}
int frontE(){
    if(isEmpty()){
        cout<< "queue is Empty";
        return -1;
    }

    return arr[f];
}
void enqueue(int ele){
    if(isFull()){
        cout<<"queue is full";
    }
    f++;
    arr[f]=ele;
}
int dequeue(){
    if(isEmpty()){
        cout<< "queue is Empty";
        return -1;
    }
    r++;
    return arr[r];
}
void printQ(){
    for(int i:arr){
        cout<<i<<"->";
    }
}
int main(){
    enqueue(10);
    enqueue(20);
    enqueue(30);

    printQ();
    cout<<endl;
    cout<<dequeue()<<endl;
    return 0;
}