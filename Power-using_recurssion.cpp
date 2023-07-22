// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int power(int base,int expo){
    if(expo==0){
        return 1;
    }
    if(expo==1){
        return base;
    }
    if(expo<0){return 1/power( base,expo-1);}
    else{
        return base*power(base,expo-1);
    }
}

int main() {
    int a=power(2,5);
    cout<<a;

    return 0;
}
