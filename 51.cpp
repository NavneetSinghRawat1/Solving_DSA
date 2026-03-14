#include<bits/stdc++.h>
using namespace std;
void com(int col,int n,vector<string>& board,vector<vector<string>>& ans,vector<int> left_str,vector<int> left_dwn,vector<int> left_upr){
    if(col==n){
        ans.push_back(board);
        return;
    }
    for (int i = 0; i < n; i++)
    {
        if(left_str[i]==0&&left_dwn[i+col]==0&&left_upr[(n-1)+(i-col)]==0){
            board[i][col]='Q';
            left_str[i]=1;
            left_dwn[i+col]=1;
            left_upr[(n-1)+(i-col)]=1;
            com(col+1,n,board,ans,left_str,left_dwn,left_upr);
            board[i][col]='.';
            left_str[i]=0;
            left_dwn[i+col]=0;
            left_upr[(n-1)+(i-col)]=0;
        }
    }
}
vector<vector<string>> solveNQueens(int n) {
    vector<vector<string>> ans;
    string s(n,'.');
    vector<string> board(n,s);
    vector<int> left_str(n,0);
    vector<int> left_dwn(2*n-1,0);
    vector<int> left_upr(2*n-1,0);
    com(0,n,board,ans,left_str,left_dwn,left_upr);
    return ans;
}
int main(){
    int n=4;
    vector<vector<string>> ans(solveNQueens(n));
    for (int i = 0; i < ans.size(); i++)
    {
        for (int j = 0; j < ans[i].size(); j++)
        {
            cout<<ans[i][j]<<endl;
        }
        cout<<"----------------\n";
    }
    
}