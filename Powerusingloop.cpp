
#include <iostream>
#include<math.h>
using namespace std;

int power(int basenumber, int powernumber){
    int result=1;
    for(int i=0;i<powernumber;i++){
        result=result*basenumber;
    }
    return result;
}



int main() {
    int a=power(2,3);
    cout<<a<<endl;
    
    return 0;
}
