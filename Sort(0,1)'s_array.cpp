// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;
void printarray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
}

void sortArray(int arr[],int n){
    int i=0;
    int j=n-1;
    while(i<j){
        while(arr[i]==0 && i<j){
            i++;
        }
        while(arr[j]==1 && i<j){
            j--;
        }
        if(arr[i]==1&& arr[j]==0 && i<j){
           swap(arr[i],arr[j]);
            i++;
            j--; 
        }
        
    }
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    sortArray(arr,n);
    printarray(arr,n);
    
    
   
   
    return 0;
}
