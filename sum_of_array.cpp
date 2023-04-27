// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int main() {
    int n;
    cout<<"Enter the size of array:\n";
    cin>>n;
    int arr[n];
    int sum=0;
    cout<<"Enter your array\n";
    
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        sum+=arr[i];
    }
    cout<<"The sum of elements of the array is :\n"<<sum;
    

    return 0;
}
