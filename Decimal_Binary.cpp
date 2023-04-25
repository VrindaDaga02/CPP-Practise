// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int main() {
    int num,arr[num];
    cin>>num;
    int ct=0;
    while(num!=0){
        arr[ct]=num%2;
        num=num/2;
        ct++;
    }
    
    for(int j=ct-1;j>=0;j--){
        cout<<arr[j];
    }

    return 0;
}
