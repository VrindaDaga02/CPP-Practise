#include<bits/stdc++.h>
using namespace std;
int search(int arr[],int n,int key){
    for(int i=0;i<n;i++){
        if(arr[i]==key){
            return 1;
        }
    }
    return 0;
}

int main(){
    int n;
    cout<<"Enter the size of array:\n";
    cin>>n;
    int arr[n];
    cout<<"Enter the array:\n";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int key;
    cout<<"Enter your key value:\n";
    cin>>key;
    bool found=search(arr, n, key);
    if(found){
        cout<<"yes present";
    }
    else{
        cout<<"no, not present";
    }
    
}
