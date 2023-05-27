#include <iostream>
using namespace std;
int main() {
    int n,m;
    cin>>n>>m;
    int s=n+m;
    int arr1[n];
    for(int i=0;i<n;i++){
        cin>>arr1[i];
    }
    int arr2[m];
    for(int i=0;i<m;i++){
        cin>>arr2[i];
    }
    
    int arr3[n+m];
    int i=0;
    int j=0;
    int k=0;
    
    while(i<n && j<m){
        if(arr1[i]>arr2[j]){
            arr3[k++]=arr2[j++];
        }
        else{
            arr3[k++]=arr1[i++];
        }
    }
    while(i<n){
        arr3[k++]=arr1[i++];
    }
    while(j<m){
        arr3[k++]=arr2[j++];
    }
    for(int i=0;i<s;i++){
        cout<<arr3[i];
    }

    return 0;
}
