#include<bits/stdc++.h>
using namespace std;
// public:
void bubble(vector<int> &arr){
    for(int i=0;i<arr.size();i++){
        for(int j=i;j<arr.size()-1-i;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }
    // for(int i:a)
}
void insertion(vector<int> &arr){
    for(int i=1;i<arr.size();i++){
        int key = arr[i];
        int j= i-1;
        while(j>=0 && arr[j]>key){
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1]=key;
    }
}
void selection(vector<int> &arr){
    for(int i=0;i<arr.size();i++){
        int min = i;
        for(int j=i;j<arr.size();j++){
            if(arr[j]<arr[min]){
                min = j;
            }
        }
        swap(arr[i],arr[min]);
    }
}
void mainM(int s,int mid,int e,vector<int> &arr){
    int i=s,j=mid+1,k=0;
    vector<int> temp(e-s+1);
    while(i<=mid && j<=e){
        if(arr[i]<arr[j]){
            temp[k]=arr[i];
            i++;
        }else{
            temp[k]=arr[j];
            j++;
        }
        k++;
    }
    while (i<=mid){
        temp[k]=arr[i];
        i++;
        k++;
    }
    while(j<=e){
        temp[k]=arr[j];
        j++;
        k++;
    }
    for(int i=s,k=0;k<temp.size();i++,k++){
        arr[i]=temp[k];
    }
    
}
void merge(int s,int e, vector<int> &arr){
    if(s<e){
        int mid = s + (e-s)/2;
        merge(s,mid,arr);
        merge(mid+1,e,arr);
        mainM(s,mid,e,arr);
    }
}
int pivot(int s,int e,vector<int> &arr){
    int pi = arr[s];
    int i=s,j=e;
    while(i<j){
        while(i<e && arr[i]<=pi){
            i++;
        }
        while(j>s && arr[j]>pi){
            j--;
        }
        if(i<j){
            swap(arr[i],arr[j]);
        }
    }
    swap(arr[j],arr[s]);
    return j;
}
void quick(int s,int e , vector<int> &arr){
    if(s<e){
        int pi = pivot(s,e,arr);
        quick(s,pi,arr);
        quick(pi+1,e,arr);
    }
}
int main(){
    vector<int> v = {2,7,4,5,8,9,6};
    // bubble(v);
    // insertion(v);
    // selection(v);
    // merge(0,v.size()-1,v);
    quick(0,v.size()-1,v);
    for(int i:v){
        cout<<i;
    }
}
