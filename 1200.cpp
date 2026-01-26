#include<bits/stdc++.h>
using namespace std;
vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
        vector<vector<int>> ans;
        sort(arr.begin(),arr.end());
        int m=INT_MAX;
        for(int i=0;i<arr.size()-1;i++){
            m=min(abs(arr[i]-arr[i+1]),m);
        }
        for(int i=0;i<arr.size()-1;i++){
            if(abs(arr[i]-arr[i+1])==m){
                ans.push_back({arr[i],arr[i+1]});
            }
        }
        return ans;
}
int main(){
    vector<int> arr={1,3,6,10,15};
    vector<vector<int>> ans(minimumAbsDifference(arr));
    for (int i = 0; i < ans.size(); i++)
        {
            for (int j = 0; j < ans[i].size(); j++)
            {
                cout<<ans[i][j]<<" ";
            }
            cout<<endl;
        }
}