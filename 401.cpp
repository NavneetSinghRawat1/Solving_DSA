#include<bits/stdc++.h>
using namespace std;
int checker(int i,int j,int turnedOn){
    int check=0,cnt=0;
    bitset<6> h(i);
    bitset<6> m(j);
    cnt=h.count()+m.count();
    if(cnt==turnedOn){
        check=1;
    }
    return check;
}
vector<string> readBinaryWatch(int turnedOn) {
    vector<string> ans;
    for(int i=0;i<12;i++){
        for(int j=0;j<60;j++){
            if(checker(i,j,turnedOn)==1){
                string s;
                s=to_string(i)+":"+to_string(j);
                if(j<10){
                    s.insert(s.size()-1,"0");
                }
                ans.push_back(s);
            }
        }
    }
    return ans;
}
int main(){
    int turnedOn=1;
    vector<string> ans(readBinaryWatch(turnedOn));
    for(auto i:ans){
        cout<<i<<endl;
    }
}