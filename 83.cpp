#include<bits/stdc++.h>
using namespace std;
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};
ListNode* deleteDuplicates(ListNode* head) {
    if(head==NULL)return head;
    ListNode* temp=head;
    ListNode* n=head->next;
    while(n){
        if(temp->val==n->val){
            temp->next=n->next;
        }
        else{
            temp=n;
        }
        n=n->next;
    }
    return head;
}
int main(){
    vector<int> num={1,1,2,3,3};
    ListNode* head=new ListNode(num[0]);
    ListNode* temp=head;
    for (int i = 1; i < num.size(); i++)
    {
        ListNode* x=new ListNode(num[i]);
        temp->next=x;
        temp=x;
    }
    ListNode* ans(deleteDuplicates(head));
    while(ans){
        cout<<ans->val<<endl;
        ans=ans->next;
    }
    
}