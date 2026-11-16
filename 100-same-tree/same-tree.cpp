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
    void traverse(TreeNode* &p, TreeNode* &q, bool &ans){
        
        if (p==nullptr && q==nullptr) return;
        
        if (p == nullptr || q == nullptr || p->val != q->val){
            ans = false;
            return;
        }

        traverse(p->left, q->left, ans);
        traverse(p->right, q->right, ans);
    }
public:
    bool isSameTree(TreeNode* p, TreeNode* q) {
        bool ans = true;
        traverse(p, q, ans);
        return ans;
    }
};