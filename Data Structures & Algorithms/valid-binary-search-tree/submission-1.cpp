class Solution {
public:
    bool isValidBST(TreeNode* root) {
        return dfs(root, nullptr, nullptr);
    }
    bool dfs(TreeNode* node, TreeNode* minNode, TreeNode* maxNode){
        if(!node) return true;
        if((minNode && node->val <= minNode->val) || (maxNode && node->val >= maxNode->val)) return false;
        return dfs(node->left, minNode, node) && dfs(node->right, node, maxNode);
    }
};