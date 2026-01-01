#include <bits/stdc++.h>
using namespace std;
int main() {
    vector<int> digits={1,2,3,9,9,8,9};//1 2 9 9  0
    vector<int> res;
    if(digits[digits.size()-1]!=9){
        res=digits;
        res[res.size()-1]=res[res.size()-1]+1;
    }
    else{
        int c=0;
        while(1){
            int last=digits.back();
            digits.pop_back();
            if(last==9){
                res.push_back(0);
                c=1;
            }
            else{
                res.push_back(last+1);
                c=0;
                break;
            }
            if(digits.empty()==true){
                break;
            }
        }
        if(c==1)res.push_back(1);
        reverse(digits.begin(),digits.end());
        res.insert(res.end(),digits.begin(),digits.end());
        reverse(res.begin(),res.end());
    }
    for(auto i:res){
        cout<<i<<" ";
    }
    return 0;
}