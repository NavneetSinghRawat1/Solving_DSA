#include<bits/stdc++.h>
using namespace std;
int issorted(vector<int>& nums){
        int x=0;
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i]>nums[i+1]){
                return 0;
            }
        }
        return 1;
}
int minimumPairRemoval(vector<int>& nums) {
    int op=0;
    while(1){
        if(issorted(nums)==1){
            return op;
        }
        int sum=INT_MAX,idx_f,idx_s;
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i]+nums[i+1]<sum){
                sum=nums[i]+nums[i+1];
                idx_f=i;
                idx_s=i+1;
            }
        }
        vector<int> temp;
        for(int i=0;i<idx_f;i++){
            temp.push_back(nums[i]);
        }
        temp.push_back(sum);
        for(int i=idx_s+1;i<nums.size();i++){
            temp.push_back(nums[i]);
        }
        nums=temp;
        op++;
    }
    return 0;
}
int main(){
    vector<int> nums={5,2,3,1};
    cout<<minimumPairRemoval(nums);
}