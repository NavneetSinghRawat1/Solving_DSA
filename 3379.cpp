#include<bits/stdc++.h>
using namespace std;
vector<int> constructTransformedArray(vector<int>& nums) {
        vector<int> res;
        int n=nums.size();
        for(int i=0;i<n;i++){
            if(nums[i]>0){
                int t=nums[i]%n;
                if(t+i>=n){
                    t=(t+i)%n;
                    res.push_back(nums[t]);
                }
                else{
                    res.push_back(nums[t+i]);
                }
            }
            else if(nums[i]<0){
                int t=abs(nums[i]%n);
                if(i>=t){
                    res.push_back(nums[i-t]);
                }
                else {
                    t=t-i;
                    res.push_back(nums[nums.size()-t]);
                }
            }
            else{
                res.push_back(nums[i]);
            }
        }
        return res;
}
int main(){
    vector<int> nums={-1,4,-1};
    vector<int> res(constructTransformedArray(nums));
    cout<<"---------------------------\n";
    for(auto i:res){
        cout<<i<<" ";
    }
}