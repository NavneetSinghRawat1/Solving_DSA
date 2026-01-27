#include<bits/stdc++.h>
using namespace std;
// void reverseString(vector<char>& s) {
//     int x=s.size();
//     for(int i=0;i<x/2;i++){
//         char temp=s[i];
//         s[i]=s[x-1-i];
//         s[x-1-i]=temp;
//     }
// }
void reverseString(vector<char>& s) {
    int l=0,r=s.size()-1;
    while(l<r){
        char c=s[l];
        s[l]=s[r];
        s[r]=c;
        l++;
        r--;
    }
}
int main(){ 
    vector<char> s={'h','e','l','l','o'};
    reverseString(s);
    for(auto c:s){
        cout<<c<<" ";
    }
}