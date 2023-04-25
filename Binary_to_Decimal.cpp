// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
//without loops
int main() {
    int n;
    cout<<"Enter your number"<<endl;
    cin>>n;
    int sum=0;
    int base_digit=1;//since the number is a pow of 2
    int temp=n;
    while(temp!=0){
        int last_digit=temp%10;
        sum+=last_digit*base_digit;
        base_digit=base_digit*2;
        temp=temp/10;
    }
    cout<<"The decimal value is "<<sum;
    

    return 0;
} 
