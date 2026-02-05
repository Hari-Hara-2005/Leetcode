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
    vector<int> rightSideView(TreeNode* root) {
        vector<int> ans;
        right(root, ans, 0);
        return ans;
    }
    void right(TreeNode* root, vector<int>& arr, int level) {
        if (root == nullptr)
            return;
        if (level == arr.size()) {
            arr.push_back(root->val);
        }
        if (root->right != nullptr)
            right(root->right, arr, level + 1);
        if (root->left != nullptr)
            right(root->left, arr, level + 1);
    }
};