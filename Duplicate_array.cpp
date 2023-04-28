#include<bits/stdc++.h>
int findDuplicate(vector<int> &arr) 
{
    int i=0;
    sort(arr.begin(),arr.end());
    vector<int> ans;
    while(i<arr.size()){
        int count=1;
        for(int j=i+1;j<arr.size();j++){
            if(arr[i]==arr[j]){
                count++;
            }
        }
        i++;
        if(count>1){
            return arr[i];
        }

    }
}
