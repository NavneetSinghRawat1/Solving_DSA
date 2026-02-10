#include<bits/stdc++.h>
using namespace std;
int mid(vector<int>& nums,int i,long long find){
    int j=nums.size()-1;
    while(i<=j){
        int mid=(i+j)/2;
        if(nums[mid]==find){
            return mid;
        }
        else if(find>nums[mid]){
            i=mid+1;
        }
        else {
            j=mid-1;
        }
    }
    return INT_MIN;
}
vector<vector<int>> fourSum(vector<int>& nums, int target) {
        set<vector<int>> ans;
        sort(nums.begin(),nums.end());
        vector<int> temp;
        for (int i = 0; i <nums.size()-3; i++)
        {
            for (int j = i+1; j < nums.size()-2; j++)
            {
                for (int k = j+1; k <nums.size()-1; k++)
                {
                    long long f=target-((long long)nums[i]+nums[j]+nums[k]);
                    int c=mid(nums,k+1,f);
                    if(c!=INT_MIN){
                        temp.push_back(nums[i]);
                        temp.push_back(nums[j]);
                        temp.push_back(nums[k]);
                        temp.push_back(f);
                        ans.insert(temp);
                        temp.clear();
                    }
                }
                
            }
        }
        vector<vector<int>> m_ans;
        for(auto i:ans){
            vector<int> a;
            for(auto j:i){
                a.push_back(j);
            }
            m_ans.push_back(a);
        }
        return m_ans;
}
int main(){
    vector<int> nums={1000000000,1000000000,1000000000,1000000000};
    vector<vector<int>> ans(fourSum(nums,-294967296));
    for (int i = 0; i < ans.size(); i++)
    {
        for (int j = 0; j <ans[i].size(); j++)
        {
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
}
