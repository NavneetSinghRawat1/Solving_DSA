#include<bits/stdc++.h>
using namespace std;
void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
    int x=m-1,y=n-1,i=nums1.size()-1;
    while(y>=0){
        if(x>=0&&nums1[x]>nums2[y]){
            nums1[i]=nums1[x];
            x--;
        }
        else{
            nums1[i]=nums2[y];
            y--;
        }
        i--;
    }
}
int main(){
    vector<int> nums1={0};
    int m=0;
    vector<int> nums2={2};
    int n=1;
    merge(nums1,m,nums2,n);
    for (int i = 0; i < nums1.size(); i++)
    {
        cout<<nums1[i]<<" ";
    }
    
}