
#include <iostream>
using namespace std;
int main() {
    int n;
    cout<<"Enter your number";
    cin >>n;
    for(int i=2;i<n;i++){
        if(n%i!=0){
            cout<<"The number"<<" "<<n<<" is prime";
        }
        else{
            cout<<"The number"<<" "<<n<<"is not prime";
        }
        break;
    }
    return 0;
}
