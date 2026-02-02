/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left),
 * right(right) {}
 * };
 */
class Solution {
public:
    int diameterOfBinaryTree(TreeNode* root) {
        int diameter = INT_MIN;
        dF(root, diameter);
        return diameter;
    }
    int dF(TreeNode* root, int& diameter) {
        if (root == nullptr)
            return 0;
        int l = dF(root->left, diameter);
        int r = dF(root->right, diameter);
        diameter = max(diameter, l + r);
        return 1 + max(l, r);
    }
};