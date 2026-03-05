#include<bits/stdc++.h>
using namespace std;
void comb(int idx,vector<int>& ds,vector<int>& candidates,int target,int n,vector<vector<int>>& temp){
    if(idx==n){
        if(target==0){
            temp.push_back(ds);
        }
        return;
    }
    if(target>=candidates[idx]){
        ds.push_back(candidates[idx]);
        comb(idx,ds,candidates,target-candidates[idx],n,temp);
        ds.pop_back();
    }
    comb(idx+1,ds,candidates,target,n,temp);

}
vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
    vector<vector<int>> temp;
    vector<int> ds;
    comb(0,ds,candidates,target,candidates.size(),temp);
    return temp;
}
int main(){
    vector<int> candidates={2,3,6,7};
    int target=7;
    vector<vector<int>> ans(combinationSum(candidates,target));
    for (int i = 0; i < ans.size(); i++)
    {
        for (int j = 0; j < ans[i].size(); j++)
        {
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
    
}