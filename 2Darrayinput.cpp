#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin>>n;
    cin>>m;
    int array[n][m];
    cout<<"Enter";
    for(int i=0;i<n;i++){
       for(int j=0;j<m;j++){
            
            cin>>array[i][j];
        }
    }
    for(int i=0;i<n;i++){
        cout<<endl;
        for(int j=0;j<m;j++){
            cout<<array[i][j]<<" ";
        }
    }
    return 0;
    
}

