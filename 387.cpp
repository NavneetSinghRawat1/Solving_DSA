#include <bits/stdc++.h>
using namespace std;
int firstUniqChar(string s) {
    int ans=INT_MAX;
    map<char,int> mpp;
    for(char c:s){
        mpp[c]++;
    }
    for(auto i:mpp){
        if(i.second==1)
        {
            int x=s.find(i.first);
            ans=min(x,ans);
        }
    }
    if(ans==INT_MAX)return -1;
    return ans;

}
int main() {
    string s="aabb";
    cout<<firstUniqChar(s);
}