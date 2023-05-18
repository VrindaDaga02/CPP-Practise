#include <bits/stdc++.h> 
char findAddedCharacter(string &s, string &t) {
    for(int i=0;i<s.length();i++){

        if(s[i]==t[i]){
            continue;

        }
        else if(s[i]!=t[i]){
            return t[i];
        }
    }
    return t[t.length()-1];
}
