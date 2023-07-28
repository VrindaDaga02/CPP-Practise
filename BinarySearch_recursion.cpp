#include <iostream>
using namespace std;
int Binarysearch(int *arr, int s,int e,int target){
    int mid=s+(e-s)/2;
    if(s>e){
        return 0;
    }
    if(arr[mid]==target){
        cout<<"The index is: ";
        return mid;
    }
    else if(arr[mid]>target){
        return Binarysearch(arr, s,mid-1, target);
    }
    else if(arr[mid]<target){
        return Binarysearch(arr, mid+1,e, target);
    }
    else{
        cout<<"Not found";
    }
}
int main() {
    int target;
    int s=0;
    cout<<"Enter your Target"<<endl;
    cin>>target;
    int n;
    cout<<"Enter array size"<<endl;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int Bs= Binarysearch( arr, s, n, target);
    cout<<Bs;
    
    

    return 0;
}
