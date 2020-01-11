/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    int sum = 0;
    TreeNode* head;
    void dfs(TreeNode* u)
    {
        if((u->left!=NULL || u->right!=NULL))
        {
            if(u->left!=NULL)
            {
                if(u->val%2==0 && (u->left)->left!=NULL)
                    sum+=(u->left)->left->val;
                if(u->val%2==0 && (u->left)->right!=NULL)
                    sum+=(u->left)->right->val;
            }
            if(u->right!=NULL)
            {
                if(u->val%2==0 && (u->right)->left!=NULL)
                    sum+=(u->right)->left->val;
                if(u->val%2==0 && (u->right)->right!=NULL)
                    sum+=(u->right)->right->val;
            }
            if(u->left!=NULL)
                dfs(u->left);
            if(u->right!=NULL)
                dfs(u->right);
        }
    }
    int sumEvenGrandparent(TreeNode* root) {
        head = root;
        dfs(head);
        int ans = sum;
        return ans;
    }
};
