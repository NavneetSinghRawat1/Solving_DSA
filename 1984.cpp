#include<bits/stdc++.h>
using namespace std;
int minimumDifference(vector<int>& nums, int k) {
    sort(nums.begin(),nums.end());
    int m=INT_MAX;
    for(int i=0;i<nums.size()-k+1;i++){
        vector<int> temp;
        for(int j=i;j<i+k;j++){
            temp.push_back(nums[j]);
        }
        auto max_e=max_element(temp.begin(),temp.end());
        auto min_e=min_element(temp.begin(),temp.end());
        m=min(m,*max_e-*min_e);
    }
    return m;
}
int main(){
    vector<int> nums={90};
    int k=1;
    cout<<minimumDifference(nums,k);
}