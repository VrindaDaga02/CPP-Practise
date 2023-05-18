// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;
int printarray(int arr[],int n){
    for(int i=0;i<n;i++){
       cout<<arr[i]<<" ";
    }
}

void selection(int arr[],int n){
    for(int i=0;i<n-1;i++){
        int min =i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[min]){
                min=j;
            }
        }
        swap(arr[i],arr[min]);
    }
    
}

int main() {
    int n;
    cout<<"The size of array: \n";
    cin>>n;
    int arr[n];
    cout<<"Enter the array: \n";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    selection(arr,n);
    printarray(arr,n);
    
    

    return 0;
}
