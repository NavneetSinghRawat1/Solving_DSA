#include<bits/stdc++.h>
using namespace std;
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};
ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
    if(list1==NULL&&list2==NULL)return NULL;
    ListNode* head;
    if(list1==NULL){
        head=list2;
    }
    else if(list2==NULL){
        head=list1;
    }
    else{
        if(list1->val<list2->val){
            head=new ListNode(list1->val);
            list1=list1->next;
        }
        else{
            head=new ListNode(list2->val);
            list2=list2->next;
        }
        ListNode* temp=head;
        while(list1!=NULL&&list2!=NULL){
            ListNode* x;
            if(list1->val<list2->val){
                x=new ListNode(list1->val);
                list1=list1->next;
            }
            else{
                x=new ListNode(list2->val);
                list2=list2->next;
            }
            temp->next=x;
            temp=x;
        }
        while(list1){
            ListNode* x=new ListNode(list1->val);
            list1=list1->next;
            temp->next=x;
            temp=x;
        }
        while(list2){
            ListNode* x=new ListNode(list2->val);
            list2=list2->next;
            temp->next=x;
            temp=x;
        }
    }
    return head;
}
int main(){
    
}