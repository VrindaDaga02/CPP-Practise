// Online C++ compiler to run C++ program online
#include <iostream>
#include<string.h>
using namespace std;

int main() {
    string str;
    cin>>str;
    string rev="";
    for(int i=str.length()-1;i>=0;i--){
        rev+=str[i];
        
    }
    cout<<"The reversed string is"<<" "<<rev;

    return 0;
}
