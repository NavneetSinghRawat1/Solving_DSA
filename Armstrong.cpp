#include <bits/stdc++.h>
using namespace std;
 bool isArmstrong(int n) {
        int temp=0,store=n,len=log10(n)+1;
        while(n>0){
            
            temp+=pow(n%10,len);
            n/=10;
        }
        if(store==temp) return true;
        return false;
    }
int main() {
    cout << isArmstrong(153);
    return 0;
}