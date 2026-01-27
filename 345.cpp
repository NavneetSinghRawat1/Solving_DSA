#include<bits/stdc++.h>
using namespace std;
string reverseVowels(string s) {
    string x;
    int i,o=0;
    for(i=0;i<s.length();i++)
    {
        if(tolower(s[i])=='a'||tolower(s[i])=='e'||tolower(s[i])=='i'||tolower(s[i])=='o'||tolower(s[i])=='u'){
            x+=s[i];
        }
    }
    reverse(x.begin(),x.end());
    for(i=0,o=0;i<s.length();i++)
    {
        if(tolower(s[i])=='a'||tolower(s[i])=='e'||tolower(s[i])=='i'||tolower(s[i])=='o'||tolower(s[i])=='u'){
            s[i]=x[o];
            o++;
        }
    }
    return s;
}
int main(){
    string s="IceCreAm";
    cout<<reverseVowels(s);
}