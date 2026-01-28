#include<bits/stdc++.h>
using namespace std;
vector<int> spiralOrder(vector<vector<int>>& o) {
    vector<int> ans;
    int m=o.size();
    int n=o[0].size();
    int b=1;
    int a=m-1,c=n-1,i=0,j=0,d=0,e=0,q=0;
    while (q!=n*m)
    {
        ans.push_back(o[i][j]);
        if (i==d&&j<c)
        {
            j++;
        }
        else if (j==c&&i<a)
        {
            i++;
        }
        else if (i==a&&j>e)
        {
            j--;
        }
        else if(j==e&&i>d)
        {
            i--;
            if (i==d+1)
            {
            d++;
            a--;
            e++;
            c--;
            }
            
        }
        q++;  
    }
    return ans;
}
int main(){
    vector<vector<int>> matrix={{1,2,3},{4,5,6},{7,8,9}};
    vector<int> ans(spiralOrder(matrix));
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
}