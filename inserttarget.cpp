// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;


int main() {
    int n;
    cin>>n;
    int target;
    cin>> target;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    for(int i=0;i<n;i++){
        if(arr[i]==target){
            cout<<i;
            break;
        }
        else if(arr[i]>target){
            cout<<i;
            break;
        }
            
    }
    
    
    
    return 0;
}

\\leetcode insert
class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        for(int i=0;i<nums.size();i++){
            if(nums[i]==target){
                return i;
            }
            else if(nums[i]>target){
                return i;
            }
        }
        return nums.size();
        
    } 
};
