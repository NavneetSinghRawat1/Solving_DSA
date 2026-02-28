#include<bits/stdc++.h>
using namespace std;
int concatenatedBinary(int n) {
    long long ans=0;
    int a=pow(10,9)+7;
    for (int i = 1; i <=n; i++)
    {
        int x=log2(i)+1;
        ans=ans<<x;
        ans=(ans|i);
        ans=ans%a;
    }
    return ans;
}
int main(){
    int n=42;
    cout<<concatenatedBinary(n);
}