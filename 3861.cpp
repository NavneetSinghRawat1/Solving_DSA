#include<bits/stdc++.h>
using namespace std;
int minimumIndex(vector<int>& capacity, int itemSize) {
    int ans=INT_MAX;
    int idx;
    for (int i = 0; i < capacity.size(); i++)
    {
        if(capacity[i]>=itemSize&&ans>capacity[i]){
            idx=i;
            ans=capacity[i];
        }
    }
    ans=(ans==INT_MAX)?-1:idx;
    return ans;
}
int main(){
    vector<int> capacity={1,5,3,7};
    int itemSize=3;
    cout<<minimumIndex(capacity,itemSize);
}