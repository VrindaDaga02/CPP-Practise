// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    int a=2*n;
    int nums[n];
    int ans[a];
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    for(int i=0;i<n;i++){
        ans[i]=nums[i];
        ans[i+n]=nums[i];
    }
    for(int i=0;i<a;i++){
        cout<<ans[i]<<" ";
    }
    

    return 0;
}
