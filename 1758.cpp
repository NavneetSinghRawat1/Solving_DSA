#include<bits/stdc++.h>
using namespace std;
int minOperations(string s) {
    char c='0';
    char d='1';
    int c_s=0,d_s=0;
    for (int i = 0; i <s.size(); i++)
    {
        if(s[i]!=c)c_s++;
        if(s[i]!=d)d_s++;
        c=(c=='0')?'1':'0';
        d=(d=='0')?'1':'0';
    }
    return min(c_s,d_s);
}
int main(){
    string s="10010100";
    cout<<minOperations(s);
}