#include<bits/stdc++.h>
using namespace std;
int numSteps(string s) {
    int steps=0;
    while(s!="1"){
        if(s.back()=='1'){
            int i;
            for(i=s.length()-1;i>=0;i--){
                if(s[i]=='0')
                {
                    s[i]='1';
                    steps++;
                    break;
                }
            }
            if(i==-1){
                steps+=s.length()+1;
                s='1';
                return steps;
            }
        }
        s.pop_back();
        steps++;
    }
    return steps;
}
int main(){
    string s="110111011";
    cout<<numSteps(s);
}