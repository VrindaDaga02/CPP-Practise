// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;
void merge(int *arr,int l,int mid,int h){
    int left=l;
    int right=mid+1;
    vector<int>b;
    while(left<=mid && right<=h){
        if(arr[left]<arr[right]){
            b.push_back(arr[left]);
            left++;
        }
        else{
            b.push_back(arr[right]);
            right++;
        }
    }
    while(left<=mid){
        b.push_back(arr[left]);
        left++;
    }
    while(right<=h){
        b.push_back(arr[right]);
        right++;
    }
    for(int i=l;i<=h;i++){
        arr[i]=b[i-l];
    }
}
void mergesort(int *arr,int l,int h){
    if(l>=h){
        return;
    }
    int mid=l+(h-l)/2;
    mergesort(arr,l,mid);
    mergesort(arr,mid+1,h);
    merge(arr,l,mid,h);
}

int main() {
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    mergesort(arr,0,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    

    return 0;
}
