#include<bits/stdc++.h>
using namespace std;
void com(int idx,vector<int> &nums,vector<vector<int>> &ans){
    if(idx==nums.size()){
        ans.push_back(nums);
        return;
    }
    for (int i = idx; i < nums.size(); i++)
    {
        swap(nums[i],nums[idx]);
        com(idx+1,nums,ans);
        swap(nums[i],nums[idx]);
    }
}
int main(){
    vector<int> nums={3,1,2};
    vector<vector<int>> ans;
    com(0,nums,ans);
    for (int i = 0; i < ans.size(); i++)
    {
        for (int j = 0; j < ans[i].size(); j++)
        {
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
    
}