#include<bits/stdc++.h>
using namespace std;
int minBitFlips(int start, int goal) {
    int ans=0;
    start=start^goal;
    while(start){
        ans+=start&1;
        start=start>>1;
    }
    return ans;
}
int main(){
    int start=10;
    int goal=7;
    cout<<minBitFlips(start,goal);
}