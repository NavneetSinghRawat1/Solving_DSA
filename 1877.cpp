#include<bits/stdc++.h>
using namespace std;
int minPairSum(vector<int>& nums) {
    sort(nums.begin(),nums.end());
    vector<int> s;
    for(int i=0;i<nums.size()/2;i++){
        s.push_back(nums[i]+nums[nums.size()-i-1]);
    }
    auto sum=max_element(s.begin(),s.end());
    return *sum;
}
int main(){
    vector<int> nums={4,1,5,1,2,5,1,5,5,4};
    cout<<minPairSum(nums);
}