
#include <iostream>
#include<math.h>
using namespace std;

int main() {
    int n;
    int p;
    cin>>n;
    int sum=0;
    
    while(n!=0){
        int digit=n%10;
        int a=digit*digit*digit;
        sum=sum+a;
        
        n=n/10;
    }
    cout<<"The value of sum is"<<sum<<endl;
    p==sum;
    if(p== n){
        cout<<"The number is an Armstrong number";
    }
    else{
        cout<<"The number is not an Armstrong number";
    }
   
    
    return 0;
}
