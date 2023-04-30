
#include<bits/stdc++.h>
using namespace std;

void printvector(vector<int> ans){
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
}
vector<int> Arrayintersection(vector<int> arr1, int n, vector<int> arr2,int m){
    vector<int> ans;
    sort(arr1.begin(),arr1.end());
    sort(arr2.begin(),arr2.end());
    for(int i=0;i<n;i++){
        int element=arr1[i];
        for(int j=0;j<m;j++){
            if(element<arr2[j]){
                break;
            }
            if(element==arr2[j]){
                ans.push_back(element);
                arr2[j]=INT_MIN;
                break;
            }
        }
    }
    printvector(ans);
    return ans;
}


int main() {
    int n;
    cin>>n;
    int m;
    cin>>m;
    vector<int>arr1(n);
    vector<int>arr2(m);
    for(int i=0;i<n;i++){
        cin>>arr1[i];
    }
    for(int i=0;i<m;i++){
        cin>>arr2[i];
    }
    Arrayintersection(arr1,n,arr2,m);
    
    
    return 0;
}
