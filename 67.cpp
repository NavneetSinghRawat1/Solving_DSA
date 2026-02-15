#include<bits/stdc++.h>
using namespace std;
string addBinary(string a, string b) {
    string ans;
    int a_s=a.size(),b_s=b.size(),carry;
    int diff=max(a_s,b_s)-min(a_s,b_s);
    if(a_s>b_s){
        for (int i = 0; i <diff; i++)
        {
            b='0'+b;
        }
    }
    else
    {
        for (int i = 0; i <diff; i++)
        {
            a='0'+a;
        }
    }
    carry=0;
    a_s=a.size();
    b_s=b.size();
    for (int i = a_s-1; i>=0; i--)
    {
        if(a[i]=='1'&&b[i]=='1'&&carry==0){
            ans.push_back('0');
            carry=1;
        }
        else if(a[i]=='1'&&b[i]=='1'&&carry==1){
            ans.push_back('1');
            carry=1;
        }
        else if(a[i]!=b[i]&&carry==1){
            ans.push_back('0');
            carry=1;
        }
        else if(a[i]!=b[i]&&carry==0){
            ans.push_back('1');
            carry=0;
        }
        else if(a[i]==b[i]&&carry==1) {
            ans.push_back('1');
            carry=0;
        }
        else if(a[i]==b[i]&&carry==0) {
            ans.push_back('0');
            carry=0;
        }
    }
    if(carry)ans.push_back('1');
    reverse(ans.begin(),ans.end());
    return ans;
}
int main(){
    string a="11";
    string b="1";
    cout<<addBinary(a,b);
}