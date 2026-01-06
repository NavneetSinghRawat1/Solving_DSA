#include<bits/stdc++.h>
using namespace std;
bool isValid(string s) {
    stack<char> temp;
    for(char c:s){
        if(c=='('||c=='{'||c=='['){
            temp.push(c);
        }
        else{
            if(temp.empty()==false){

                char top=temp.top();
                if(top=='['&&c==')'||top=='{'&&c==')')return false;
                else if(top=='('&&c=='}'||top=='['&&c=='}')return false;
                else if(top=='('&&c==']'||top=='{'&&c==']')return false;
                else temp.pop();
            }
            else return false;
        }
    }
    if(temp.empty()==false) return false;
    return true;
}

int main(){
    cout<<isValid("(())");
}