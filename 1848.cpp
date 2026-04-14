#include<bits/stdc++.h>
using namespace std;
int getMinDistance(vector<int>& nums, int target, int start) {
    int ans=INT_MAX;
    int i=0,j=nums.size()-1;
    while(i<=j){
        if(nums[i]==target){
            ans=min(ans,abs(i-start));
            i++;
        }
        else if(nums[j]==target){
            ans=min(ans,abs(j-start));
            j--;
        }
        else{
            i++;
            j--;
        }
    }
    return ans; 
}
int main(){
    vector<int> nums={1,2,3,4,5};
    int target=5;
    int start=3;
    cout<<getMinDistance(nums,target,start);
}