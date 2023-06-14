#include <bits/stdc++.h> 
bool valid(char ch){
    if(ch>='a'&&ch<='z' || ch>='A'&&ch<='Z'|| ch>='0'&& ch<='9'){
        return true;
    }
    else{
        return false;
    }
}
char tolower(char ch){
    if(ch>='a'&& ch<='z'){
        return ch;
    }
    else{
        char temp=ch-'A'+'a';
        return temp;
    }
}
bool palindrome(string s){
    int st=0;
    int e=s.length()-1;
    while(st<=e){
        if(s[st]!=s[e]){
            return false;
        }
        else{
            st++;
            e--;
            
        }
    }
    return true;
}
bool checkPalindrome(string s)
{   string temp="";
    for(int i=0;i<s.length();i++){
        if(valid(s[i])){
            temp.push_back(s[i]);
            
        }
    }
    for(int j=0;j<temp.length();j++){
       temp[j]=tolower(temp[j]);
            
        
    }
    return palindrome(temp);
}





