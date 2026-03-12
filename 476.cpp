#include<bits/stdc++.h>
using namespace std;
int bitwiseComplement(int n) {
    int temp=n;
    long long op=1;
    while(temp!=0){
        op=op<<1;
        temp=temp>>1;
    }
    op--;
    return op^n;
}
int main(){
    int n=2147483647;
    cout<<bitwiseComplement(n);
} 