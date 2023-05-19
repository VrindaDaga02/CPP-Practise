// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
void print(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
void bubblesort(int arr[],int n){
    for(int i=1;i<n;i++){
        for(int j=0;j<n-i;j++){
            if(arr[j]>arr[j+1])swap(arr[j],arr[j+1]);
        }
    }
    print(arr, n);
}

int main() {
    int n;
    cout<<"Size of the array: \n";
    cin>>n;
    int arr[n];
    cout<<"Enter the array: \n";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    bubblesort(arr,n);
   
    

    return 0;
}
