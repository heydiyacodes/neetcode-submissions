/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */

class Solution {
public:
    bool isBalanced(TreeNode* root) {
        if(!root) return true;
        
        int l=maxh(root->left);
        int r=maxh(root->right);
        if (abs(l-r)>1) return false;
        return isBalanced(root->left) && isBalanced(root->right);
    }
private:
    int maxh(TreeNode* root){
        if(!root) return 0;
        return max(maxh(root->left),maxh(root->right))+1;
    }
};
