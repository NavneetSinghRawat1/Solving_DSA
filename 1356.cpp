#include<bits/stdc++.h>
using namespace std;
vector<int> sortByBits(vector<int>& arr) {
    vector<int> temp;
    sort(arr.begin(),arr.end());
    int x=0;
    int n=arr.size();
    while(temp.size()!=n){
        for (int i = 0; i < arr.size(); i++)
        {
            if(__builtin_popcount(arr[i])==x){
                temp.push_back(arr[i]);
            }
        }
        x++;
    }
    return temp;
}
int main(){
    vector<int> arr={0,1,2,3,4,5,6,7,8};
    vector<int> ans(sortByBits(arr));
    for (int i = 0; i < ans.size(); i++)
    {
        cout<<ans[i]<<" ";
    }
    
}