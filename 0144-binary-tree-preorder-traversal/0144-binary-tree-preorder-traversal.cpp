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

    vector<int> ans;

    void preorder(TreeNode* root) {

        // Base case
        if(root == NULL)
            return;

        // Root
        ans.push_back(root->val);

        // Left subtree
        preorder(root->left);

        // Right subtree
        preorder(root->right);
    }

    vector<int> preorderTraversal(TreeNode* root) {

        preorder(root);

        return ans;
    }
};