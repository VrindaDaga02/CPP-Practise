// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;

int Firstleftoccurence(int arr[],int n,int key){
    int s=0;
    int e=n-1;
    int mid=s+(e-s)/2;
    int ans=-1;
    while(s<=e){
        if(key==arr[mid]){
            ans=mid;
            e=mid-1;
        }
        else if(key>arr[mid]){
            s=mid+1;
        }
        else if(key<arr[mid]){
            e=mid-1;
        }
        mid=s+(e-s)/2;
    }
    return ans;
}

int FirstRightoccurence(int arr[],int n,int key){
    int s=0;
    int e=n-1;
    int mid=s+(e-s)/2;
    int ans=-1;
    while(s<=e){
        if(key==arr[mid]){
            ans=mid;
            s=mid+1;
        }
        else if(key>arr[mid]){
            s=mid+1;
        }
        else if(key<arr[mid]){
            e=mid-1;
        }
        mid=s+(e-s)/2;
    }
    return ans;
}

int main() {
    int n;
    cout<<"Enter the size of array:\n";
    cin>>n;
    int arr[n];
    cout<<"Enter your array:\n";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<endl;
    int key;
    cout<<"Enter the key element:\n";
    cin>>key;
    int a=Firstleftoccurence(arr,n,key);
    cout<<"First occurence at index :"<<a<<endl;
    int b=FirstRightoccurence(arr,n,key);
    cout<<"Last occurence at index :"  <<b;
    

    return 0;
}
