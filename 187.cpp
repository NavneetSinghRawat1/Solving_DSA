#include<bits/stdc++.h>
using namespace std;
vector<string> findRepeatedDnaSequences(string s) {
    vector<string> ans;
    unordered_map<string,int> mpp;
    if (s.size()<10)
    {
        return ans;
    }
    for (int i = 0; i < s.size()-10+1; i++)
    {
        mpp[s.substr(i,10)]++;
    }
    for(auto it:mpp){
        if(it.second>1){
            ans.push_back(it.first);
        }
    }
    return ans;
}
int main(){
    string s="A";
    vector<string> ans(findRepeatedDnaSequences(s));
    for(auto i:ans){
        cout<<i<<endl;
    }
}
