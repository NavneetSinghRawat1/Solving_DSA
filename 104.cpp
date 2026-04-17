#include<bits/stdc++.h>
using namespace std;
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};
void find(int &n,TreeNode* head,int crnt){
    if(head==NULL){
        return;
    }
    find(n,head->left,crnt+1);
    find(n,head->right,crnt+1);
    n=max(n,crnt+1);
}
int maxDepth(TreeNode* root) {
    TreeNode* head=root;
    int n=0;
    int crnt=0;
    find(n,head,crnt);
    return n;
}
int main(){
    vector<int> r={3,9,20,NULL,NULL,15,7};
    TreeNode* root=new TreeNode(r[0]);
    int ans=maxDepth(root);
    cout<<ans;
}