//Runtime: 260 ms, faster than 6.71% of C++ online submissions for Maximum Level Sum of a Binary Tree.
//Memory Usage: 70.3 MB, less than 100.00% of C++ online submissions for Maximum Level Sum of a Binary Tree.

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
    TreeNode *head;
    int level[10007],max_level=-1;
    void dfs(TreeNode *u,int lvl)
    {
        level[lvl]+=u->val;
        if(lvl>max_level)
            max_level=lvl;
        if(u->left!=NULL)
            dfs(u->left,lvl+1);
        if(u->right!=NULL)
            dfs(u->right,lvl+1);
    }
    
    int maxLevelSum(TreeNode* root) {
        
        memset(level,0,sizeof(level));
        dfs(root,1);
        int mx=INT_MIN,ret;
        for(int i=1;i<=max_level;i++)
        {
            if(mx<level[i])
            {
                mx = level[i];
                ret = i;
            }
        }
        return ret;
    }
};
