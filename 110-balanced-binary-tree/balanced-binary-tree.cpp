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
private:
    int traverse(TreeNode* root){
        if (!root) return 0;

        int leftHeight = traverse(root->left);
        if (leftHeight==-1) return -1;

        int rightHeight = traverse(root->right);
        if (rightHeight==-1) return -1;

        if (abs(leftHeight-rightHeight)>1) return -1;

        return max(leftHeight, rightHeight) +1;

    }
public:
    bool isBalanced(TreeNode* root) {      
        
        return traverse(root) != -1;
    }
};