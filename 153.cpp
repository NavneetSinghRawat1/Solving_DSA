#include<bits/stdc++.h>
using namespace std;
int findMin(vector<int>& nums) {
    int n=nums.size()-1;
    if(nums[0]<=nums[n])return nums[0];
    int left=0,right=n;
    while(1){
        int mid=(left+right)/2;
        if(nums[mid]>nums[mid+1])return nums[mid+1];
        else if(nums[mid]<nums[mid-1])return nums[mid];
        else if(nums[mid]>nums[right]){
            left=mid;
        }
        else{
            right=mid;
        }
    }
}
int main(){
    vector<int> nums={3,4,5,6,7,8,0,1,2};
    cout<<findMin(nums);
}