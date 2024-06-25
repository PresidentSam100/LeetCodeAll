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
    vector<int> inorderTraversal(TreeNode* root) { 
        vector<int> inOrder;
        stack<TreeNode*> traverse;
        while (root || !traverse.empty()) {
            while (root) {
                traverse.push(root);
                root = root->left;
            }
            root = traverse.top();
            traverse.pop();
            inOrder.push_back(root->val);
            root = root->right;
        }
        return inOrder;
    }
};
