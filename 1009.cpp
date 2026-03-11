#include<bits/stdc++.h>
using namespace std;
int bitwiseComplement(int n) {
    int temp=n;
    int op=1;
    while(temp!=0){
        op=op<<1;
        temp=temp>>1;
    }
    op--;
    return (n==0)?1:op^n;
}
int main(){
    int n=0;
    cout<<bitwiseComplement(n);
} 