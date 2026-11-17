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
    void traverse(TreeNode *left, TreeNode *right, bool &result){
        if (!left && !right) return;

        if ((!left && right) || (left && !right) || (left->val!=right->val)){
            result = false;
            return;
        }

        traverse(left->left, right->right, result);
        traverse(left->right, right->left, result);

    }
public:
    bool isSymmetric(TreeNode* root) {
        bool result = true;
        traverse(root->left, root->right, result);
        return result;
    }
};