#include <iostream>
using namespace std;
bool issorted(int *arr,int n){
    if(n==0|| n==1){
        return true;
    }
    if(arr[0]>arr[1]){
        return false;
    }
    else{
        bool remain=issorted(arr+1, n-1);
        return remain;
    }
}

int main() {
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    bool ans=issorted(arr,n);
    if(ans)cout<<"yes";
    else cout<<"no";

    return 0;
}
