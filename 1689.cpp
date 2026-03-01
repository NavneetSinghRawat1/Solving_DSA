#include<bits/stdc++.h>
using namespace std;
int minPartitions(string n) {
    int ans=0;
    for(auto i:n){
        ans=max(ans,(int)i-48);
    }
    return ans;
}
int main(){
    string n="153";
    cout<<minPartitions(n);
}