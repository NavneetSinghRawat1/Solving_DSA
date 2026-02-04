#include<bits/stdc++.h>
using namespace std;
bool isTrionic(vector<int>& nums) {
        bool a=false,b=false,c=false;
        int i=1;
        while(i<nums.size()&&nums[i-1]<nums[i]){
            i++;
            a=true;
        }
        if(a==true){
            while(i<nums.size()&&nums[i-1]>nums[i]){
                i++;
                b=true;
            }
        }
        if(b==true){
            while(i<nums.size()&&nums[i-1]<nums[i]){
                i++;
                c=true;
            }
        }
        if(i==nums.size()&&c==true)return true;
        return false;
    }
int main(){
    vector<int> nums={1,4,8,9};
    cout<<isTrionic(nums);
}