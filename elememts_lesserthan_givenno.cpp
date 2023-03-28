
#include <bits/stdc++.h>
using namespace std;

int main() {
     int n;
     cout<<"Enter the size of your array:"<<endl;
     cin>>n;
     int Number;
     cout<<"Enter the boundary number"<<endl;
     cin>>Number;
     int count=0;
     vector<int>nums(n);
     cout<<"The input array is: "<<endl;
     for(int i=0;i<nums.size();i++){
         cin>>nums[i];
     }
     
     for(int i=0;i<nums.size();i++){
         if(nums[i]<Number){
             count++;
         }
     }
     cout<<"No.of numbers lesser than the user's input Number is"<<"\n"<<count;
    

    return 0;
}
