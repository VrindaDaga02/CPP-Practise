#include <iostream>
using namespace std;
bool ls(int *arr,int n,int target){
    if(n==0){
        return 0;
    }
    if(arr[0]==target){
        return true;
    }
    else{
        return ls(arr+1,n-1,target);
    }
}

int main() {
    int target;
    cout<<"Enter your Target"<<endl;
    cin>>target;
    int n;
    cout<<"Enter array size"<<endl;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    if(ls(arr,n,target)){
        cout<<"Target found";
    }
    else{cout<<"Target not found";}
    
    

    return 0;
}
