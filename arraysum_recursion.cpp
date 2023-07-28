#include <iostream>
using namespace std;
int arraysum(int *arr,int n){
    if(n==0){
        return 0;
    }
    int ans=arr[0];
    ans=ans+arraysum(arr+1,n-1);
    return ans;
}

int main() {
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int ans=arraysum(arr,n);
    cout<<ans;
    

    return 0;
}
