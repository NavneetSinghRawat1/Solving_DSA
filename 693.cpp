#include<bits/stdc++.h>
using namespace std;
// bool hasAlternatingBits(int n) {
//     bitset<32> b(n);
//     string s=b.to_string();
//     for(int i=s.find('1');i<s.size();i++){
//         if(s[i]==s[i+1]){
//             return false;
//         }
//     }
//     return true;
// }
bool hasAlternatingBits(int n) {
    int bit=log2(n)+1;
    bitset<32> b(n);
    for(int i=0;i<bit-1;i++){
        if(b[i]==b[i+1]) return false;
    }
    return true;
}
int main(){
    int n=5;
    cout<<hasAlternatingBits(n);
}