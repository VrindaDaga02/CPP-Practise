
#include <iostream>
using namespace std;
int main() {
    string n;
    cin>>n;
    int a=n.length();
    
    for(int i=0;i<a;i++){
        int ct=0;
        for(int j=0;j<a;j++){
           if(n[i]==n[j])ct++;
        }
        if(ct<=1)cout<<n[i];
    }
    return 0;
}
