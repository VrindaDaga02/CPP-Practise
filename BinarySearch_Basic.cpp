
#include <bits/stdc++.h>
using namespace std;

int BinarySearch(int arr[],int n,int key){
    int low=0;
    int high=n-1;
    int mid=(low+high)/2;
    while(low<=high){
        if(mid==key){
            return mid;
        }
        else if(key<mid){
            high=mid-1;
        }
        else if(key>mid){
            low=mid+1;
        }
        mid=(low+high)/2;
    }
    return -1;
       
        
    
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
    int a=BinarySearch(arr,n,key);
    cout<<"The value od the index which matches the key element is "<<a;
    
    

    return 0;
}
