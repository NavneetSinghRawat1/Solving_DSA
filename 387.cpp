#include <bits/stdc++.h>
using namespace std;
int firstUniqChar(string s) {
    int ans=INT_MAX;
    map<char,int> mpp;
    for(char c:s){
        mpp[c]++;
    }
    for(int i=0;i<s.size();i++){
        auto it=mpp.find(s[i]);
        if(it->second==1){
            return i;
        }
    }
    return -1;
}
// int firstUniqChar(string s) {
//     int ans=INT_MAX;
//     map<char,int> mpp;
//     for(char c:s){
//         mpp[c]++;
//     }
//     for(auto i:mpp){
//         if(i.second==1)
//         {
//             int x=s.find(i.first);
//             ans=min(x,ans);
//         }
//     }
//     if(ans==INT_MAX)return -1;
//     return ans;

// }
int main() {
    string s="loveleetcode";
    cout<<firstUniqChar(s);
}