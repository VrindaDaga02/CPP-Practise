#include <iostream>
using namespace std;
void reverse(string &s,int i,int j){
    if(i>j){
        return ;
    }
    swap(s[i],s[j]);
    i++;
    j--;
    reverse(s,i,j);
}
int main() {
    string s;
    getline(cin,s);
    int i=0;
    int j=s.length()-1;
    reverse(s,i,j);
    cout<<s;

    return 0;
}
