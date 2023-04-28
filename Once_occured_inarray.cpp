// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int unique(int arr[],int n){
    int ans =0;
    for(int i=0;i<n;i++){
        ans=ans^arr[i];
    }
    return ans;
}//works for odd value of n

int main() {
    int n;
    cout<<"enter the size of your array: \n";
    cin>>n;
    int arr[n];
    cout<<"enter the array: \n";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<unique(arr,n);
    return 0;
}
