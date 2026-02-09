#include<bits/stdc++.h>
using namespace std;
int mid(vector<int>& nums,int i,int find){
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
vector<vector<int>> threeSum(vector<int>& nums) {
    set<vector<int>> ans;
    sort(nums.begin(),nums.end());
    vector<int> temp;
    for (int i = 0; i <nums.size()-2; i++)
    {
        for (int j = i+1; j < nums.size()-1; j++)
        {
            int f=-(nums[i]+nums[j]);
            int c=mid(nums,j,f);
            if(c!=INT_MIN){
                ans.insert({nums[i],nums[j],f});
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
    vector<int> nums={-1,0,1,2,-1,-4};
    vector<vector<int>> ans(threeSum(nums));
    for (int i = 0; i < ans.size(); i++)
    {
        for (int j = 0; j <ans[i].size(); j++)
        {
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
}
    
// int mid(vector<int>& nums,int i,int j, int find){
//     while(i<j){
//         int mid=(i+j)/2;
//         if(nums[mid]==find){
//             cout<<"mid --> "<<mid<<endl;
//             return mid;
//         }
//         else if(find>nums[mid]){
//             i=mid+1;
//         }
//         else {
//             j=mid-1;
//         }
//     }
//     return INT_MIN;
// }
// vector<vector<int>> threeSum(vector<int>& nums) {
//     set<vector<int>> ans;
//     sort(nums.begin(),nums.end());
//     int i=0,j=nums.size()-1;
//     int sum,find;
//     while(i<j){
//         sum=nums[i]+nums[j];
//         find=-sum;
//         int c=mid(nums,i,j,find);
//         if(c!=INT_MIN){
//             ans.insert({nums[i],find,nums[j]});
//             // i++;
//             // j--;
//         }
//         // else{
//             if(abs(nums[i])>abs(nums[j])){
//                 i++;
//             }
//             else{
//                 j--;
//             }
//         // }
//     }
//     cout<<i<<" "<<j<<endl;
//     vector<vector<int>> m_ans;
//     for(auto i:ans){
//         vector<int> a;
//         for(auto j:i){
//             a.push_back(j);
//         }
//         m_ans.push_back(a);
//     }
//     return m_ans;
// }