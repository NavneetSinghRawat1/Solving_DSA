#include<bits/stdc++.h>
using namespace std;
// void com(int idx,vector<int>& ds,vector<int>& candidates,int target,vector<vector<int>>& ans){
//     if(target==0){
//         ans.push_back(ds);
//         return;
//     }
//     for (int i = idx; i < candidates.size(); i++)
//     {
//         if(i>idx&&candidates[i]==candidates[i-1])continue;
//         if(candidates[i]>target)break;
//         ds.push_back(candidates[i]);
//         com(i+1,ds,candidates,target-candidates[i],ans);
//         ds.pop_back();
//     }
// }
void com_1(int idx,vector<int>& candidates,vector<vector<int>>& ans,vector<int>& ds,int target){
    if(target==0){
        ans.push_back(ds);
        return;
    }
    if(idx==candidates.size())return;
    if(candidates[idx]<=target){
        ds.push_back(candidates[idx]);
        com_1(idx+1,candidates,ans,ds,target-candidates[idx]);
        ds.pop_back();
        idx++;
        while(idx<candidates.size()&&candidates[idx]==candidates[idx-1])idx++;
        com_1(idx,candidates,ans,ds,target);
    }
}
vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
    sort(candidates.begin(),candidates.end());
    vector<vector<int>> ans;
    vector<int> ds;
    // com(0,ds,candidates,target,ans);
    com_1(0,candidates,ans,ds,target);
    return ans;
}
int main(){
    vector<int> candidates={10,1,2,7,6,1,5};
    int target=8;
    vector<vector<int>> ans(combinationSum2(candidates,target));
    for (int i = 0; i < ans.size(); i++)
    {
        for (int j = 0; j < ans[i].size(); j++)
        {
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
}