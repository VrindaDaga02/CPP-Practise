#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<vector<int>>arr;
    int n;
    int q; //no.of queries
    cout<<"Enter the number of number of variable-length arrays";
    cin>>n;
    cout<<"Enter the number of queries";
    cin>>q;
    int k;
    
    for(int i=0;i<n;i++){
        cout<<"Enter the number of elements in sub arrays";
        cin>>k;
        vector<int>sub_arr(k);
        for(int i=0;i<k;i++){
            cin>>sub_arr[i];
        }
        arr.push_back(sub_arr);
    }
    for(int i=0;i<q;i++){
        int j,t;
        cout<<"Enter the arr indexes to be printed";
        cin>>j;
        cin>>t;
        cout<<arr[j][t];
    }
    return 0;
}
