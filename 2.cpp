#include<bits/stdc++.h>
using namespace std;
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        vector<int>l_1,l_2,ans;
        while(l1){
            l_1.push_back(l1->val);
            l1=l1->next;
        }
        while(l2){
            l_2.push_back(l2->val);
            l2=l2->next;
        }
        int carry=0,i=0;
        for(i=0;i<min(l_1.size(),l_2.size());i++){
            if(l_1[i]+l_2[i]+carry<10){
                ans.push_back(l_1[i]+l_2[i]+carry);
                carry=0;
            }
            else{
                ans.push_back((l_1[i]+l_2[i]+carry)%10);
                carry=(l_1[i]+l_2[i]+carry)/10;
            }
        }
        for(i;i<l_1.size();i++){
            if(l_1[i]+carry<10){
                ans.push_back(l_1[i]+carry);
                carry=0;
            }
            else{
                ans.push_back((l_1[i]+carry)%10);
                carry=(l_1[i]+carry)/10;
            }
        }
        for(i;i<l_2.size();i++){
            if(l_2[i]+carry<10){
                ans.push_back(l_2[i]+carry);
                carry=0;
            }
            else{
                ans.push_back((l_2[i]+carry)%10);
                carry=(l_2[i]+carry)/10;
            }
        }
        if(carry)ans.push_back(carry);
        ListNode* head=new ListNode(ans[0]);
        ListNode* temp=head;
        for(int i=1;i<ans.size();i++){
            ListNode* x=new ListNode(ans[i]);
            temp->next=x;
            temp=x;
        }
        return head;
    }
};
int main(){
    
}