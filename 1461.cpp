#include<bits/stdc++.h>
using namespace std;
bool hasAllCodes(string s, int k) {
    set<string> temp;
    int com=pow(2,k);
    int s_size=s.size();
    for (int i = 0; i <=s_size-k; i++)
    {
        string a=s.substr(i,k);
        temp.insert(a);
    }
    int n=temp.size();
    if(n!=com)return false;
    return true;
}
int main(){
    string s="0110";
    int k=20;
    cout<<hasAllCodes(s,k);
}