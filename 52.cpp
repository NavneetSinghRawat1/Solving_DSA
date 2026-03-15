#include<bits/stdc++.h>
using namespace std;
void com(int col,int n,int &ans,vector<int>& left_str,vector<int>& left_upr,vector<int>& left_dwn){
    if(col==n){
        ans++;
        return;
    }
    for (int i = 0; i < n; i++)
    {
        if(left_str[i]==0&&left_dwn[i+col]==0&&left_upr[(n-1)+(i-col)]==0){
            left_str[i]=1;
            left_dwn[i+col]=1;
            left_upr[(n-1)+(i-col)]=1;
            com(col+1,n,ans,left_str,left_upr,left_dwn);
            left_str[i]=0;
            left_dwn[i+col]=0;
            left_upr[(n-1)+(i-col)]=0;
        }
    }
}
int totalNQueens(int n) {
    int ans=0;
    vector<int> left_str(n,0);
    vector<int> left_dwn(2*n-1,0);
    vector<int> left_upr(2*n-1,0);
    com(0,n,ans,left_str,left_upr,left_dwn);
    return ans;
}
int main(){
    int n=9;
    cout<<totalNQueens(n);
}