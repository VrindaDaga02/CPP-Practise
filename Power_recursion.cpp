#include <iostream>
using namespace std;
int p(int n,int m){
    if(m==0){
        return 1;
    }
    int power=n*p(n,m-1);
    return power;
}
int main() {
    int n;int m;
    cin>>n;
    cin>>m;
     int powe=p(n,m);
    cout<<powe<<endl;

    return 0;
}
