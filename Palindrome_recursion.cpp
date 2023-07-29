// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
bool palindrome(string &s,int i,int j){
    if(i>j){
        return true;
    }
    if(s[i]!=s[j]){
        return false;
    }else{
        return palindrome(s,i+1,j-1);
    }
}
int main() {
    string s;
    getline(cin,s);
    int n=s.length()-1;
    bool ifpalindrome =palindrome(s,0,n);
    if(ifpalindrome){
        cout<<"Yes it is a Palindrome";
    }
    else{
        cout<<"Not a Palindrome";
    }
    
    return 0;
}
