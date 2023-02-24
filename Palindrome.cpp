#include <iostream>
using namespace std;

int main() {
    
    string str;
    cin>>str;
    string rev="";
    for(int i=str.length()-1;i>=0;i--){
        rev+=str[i];
   }
    
    if(rev==str){
        cout<<"yes"<<endl;
    }else {
        cout<<rev;
    }
    

    return 0;
}
