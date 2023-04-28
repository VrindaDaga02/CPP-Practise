#include <iostream>
using namespace std;
void swaparray(int arr[], int n){
    for(int i=0;i<n;i+=2){
        if(i+1<n){
            swap(arr[i],arr[i+1]);
        }
    }
    
}
void printarray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
}

int main() {
    int n;
    cout<<"enter the size of your array: \n";
    cin>>n;
    int arr[n];
    cout<<"enter the array: \n";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    swaparray(arr,n);
    printarray(arr,n);

    return 0;
}
