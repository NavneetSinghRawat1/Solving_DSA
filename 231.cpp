#include<bits/stdc++.h>
using namespace std;
bool isPowerOfTwo(int n) {
    return (__builtin_popcount(n)==1&&n>0)?true:false;
}
int main(){
    int n=-2147483648;
    cout<<isPowerOfTwo(n);
    
}