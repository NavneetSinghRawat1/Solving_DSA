#include<bits/stdc++.h>
using namespace std;
char nextGreatestLetter(vector<char>& letters, char target) {
    char ans=letters[0];
    for(int i=0;i<letters.size();i++){
        if(letters[i]>target){
            return letters[i];
        }
    }
    return ans;
}
int main(){
    vector<char> letters={'a','b','c','d','e','f','f','f','f','g','h','i'};
    char target='f';
    cout<<nextGreatestLetter(letters,target);
}