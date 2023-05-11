// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    int temp=n;
    int base=1;
    int sum=0;
    while(temp!=0){
        int ld=temp%10;
        sum=sum+ld*base;
        base=base*10;
        temp=temp/10;
    }
    if(sum==n){
        cout<<"yes palindrome";
    }
    else{
        cout<<"Oops not a palindrome";
    }
    return 0;
}
