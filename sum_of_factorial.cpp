
#include<bits/stdc++.h>
using namespace std;
int sum_of_factorial(int n){
    int fact=1;
    int sum=0;
    if(n==0 && n==1){
        return 1;
    }
    else{
        while(n>1){
            fact=n*fact;
            sum=sum+fact;
            n=n-1;
        }
        return sum;
    }
}


int main() {
    int n;
    cin>>n;
    int ans=sum_of_factorial(n);
    cout<<ans;
    return 0;
}
