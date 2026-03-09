#include<bits/stdc++.h>
using namespace std;
void com(int idx,vector<vector<int>>& ans,vector<int>& nums,vector<int>& ds){
    if(idx==nums.size()){
        ans.push_back(ds);
        return;
    }
    ds.push_back(nums[idx]);
    com(idx+1,ans,nums,ds);
    ds.pop_back();
    idx++;
    while(idx<nums.size()&&nums[idx]==nums[idx-1])idx++;
    com(idx,ans,nums,ds);
}
vector<vector<int>> subsetsWithDup(vector<int>& nums) {
    vector<vector<int>> ans;
    vector<int> ds;
    com(0,ans,nums,ds);
    return ans;        
}
int main(){
    vector<int> nums={1,2,2};
    vector<vector<int>> ans(subsetsWithDup(nums));
    for (int i = 0; i < ans.size(); i++)
    {
        for (int j = 0; j < ans[i].size(); j++)
        {
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
    
} 