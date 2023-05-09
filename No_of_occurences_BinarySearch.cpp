// To find the occurence of an element using Binary Search
#include <bits/stdc++.h>
using namespace std;

int left(int arr[],int n,int key){
    int s=0;
    int e=n-1;
    int ans=-1;
    int mid=s+(e-s)/2;
    while(s<=e){
        if(arr[mid]==key){
            ans=mid;
            e=mid-1;
        }
        else if(arr[mid]>key){
            e=mid-1;
        }
        else if(arr[mid]<key){
            s=mid+1;
        }
        mid=s+(e-s)/2;
    }
    return ans;
}

int right(int arr[],int n,int key){
    int s=0;
    int e=n-1;
    int ans=-1;
    int mid=s+(e-s)/2;
    while(s<=e){
        if(arr[mid]==key){
            ans=mid;
            s=mid+1;
        }
        else if(arr[mid]>key){
            e=mid-1;
        }
        else if(arr[mid]<key){
            s=mid+1;
        }
        mid=s+(e-s)/2;
    }
    return ans;
}

int main() {
    int n;
    cout<<"enter the size of array: ";
    cin>>n;
    int arr[n];
    cout<<"enter the array: \n";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int key;
    cout<<"Enter the key value: ";
    cin>>key;
    int a=left(arr,n,key);
    int b=right(arr,n,key);
    int result;
    result=(b-a)+1;
    cout<<"The number of occurence is: "<<result;

    return 0;
}
