#include<bits/stdc++.h>
using namespace std;
int hammingDistance(int x, int y) {
    x^=y;
    return __builtin_popcount(x);
}
int main(){
    int x=1;
    int y=4;
    cout<<hammingDistance(x,y);
}