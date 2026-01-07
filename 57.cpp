// ----------------------------------Need To Be Done-----------------------------------------------

#include<bits/stdc++.h>
using namespace std;
vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        vector<vector<int>> ans;
        int n=intervals.size();
        // int m=intervals[0].size();
        // cout<<n<<","<<m<<endl;
        if(n<newInterval.size()){
            return {newInterval};
        }
        for(int i=0;i<n;i++){
            vector<int> temp(intervals[i]);
            if(newInterval[1]<temp[0]){
                ans.push_back(newInterval);
            }
            else if(temp[1]<newInterval[0]){
                ans.push_back(temp);
            }
        }
        return ans;
}
int main(){
    vector<vector<int>> intervals={{3,5},{8,10}};
    vector<int> newInterval={1,2};
    // vector<vector<int>> intervals={{1,2},{3,5},{6,7},{8,10},{12,16}};
    // vector<int> newInterval={4,8};
    vector<vector<int>> ans(insert(intervals,newInterval));
    for(int i=0;i<ans.size();i++){
        for(int j=0;j<ans[0].size();j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
}