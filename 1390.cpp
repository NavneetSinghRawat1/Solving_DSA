#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> nums={21,4,7};
    int sum=0;
    for(int i=0;i<nums.size();i++){
        vector<int> temp;
        int n=nums[i],temp_sum=0;
        for(int j=1;j*j<=n;j++){
            if(n%j==0){
                temp.push_back(j);
                temp_sum+=j;
                if(j*j!=n){
                    temp.push_back(n/j);
                    temp_sum+=n/j;
                }
            }
        }
        if(temp.size()==4)sum+=temp_sum;
    }
    cout<<sum;
}