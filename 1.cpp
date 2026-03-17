#include<bits/stdc++.h>
using namespace std;
vector<int> twoSum(vector<int>& nums, int target) {
    map<int,int> mpp;
    for(int i=0;i<nums.size();i++){
        int rem=target-nums[i];
        if(mpp.find(rem)!=mpp.end()){
            return {mpp[rem],i};
        }
        else mpp[nums[i]]=i;
    }
    return {};
}
int main(){
    vector<int> nums={2,7,11,15};
    int target=9;
    vector<int> ans(twoSum(nums,target));
    cout<<ans[0]<<" "<<ans[1];
}