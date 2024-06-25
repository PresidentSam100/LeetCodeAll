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
        while (root) {
            if (root->left) {
                TreeNode* traverse = root->left;
                while (traverse->right && traverse->right != root) {
                    traverse = traverse->right;
                }
                if (traverse->right == NULL) {
                    traverse->right = root;
                    root = root->left;
                } else {
                    traverse->right = NULL;
                    inOrder.push_back(root->val);
                    root = root->right;
                }
            } else {
                inOrder.push_back(root->val);
                root = root->right;
            }
        }
        return inOrder; // Morris Traversal
    }
};
