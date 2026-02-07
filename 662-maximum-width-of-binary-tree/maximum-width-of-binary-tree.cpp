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
    int widthOfBinaryTree(TreeNode* root) {
        queue<pair<TreeNode*, long long>> q;
        int maxi = INT_MIN;
        if (root == nullptr)
            return 0;
        q.push({root, 0});
        while (!q.empty()) {
            int mmin = q.front().second;
            int n = q.size();
            int first, last;
            for (int i = 0; i < n; i++) {
                long long curr_id = q.front().second - mmin;
                TreeNode* node = q.front().first;
                q.pop();
                if (i == 0)
                    first = curr_id;
                if (i == n - 1)
                    last = curr_id;
                if (node->left != nullptr)
                    q.push({node->left, (curr_id * 2 + 1)});
                if (node->right != nullptr)
                    q.push({node->right, (curr_id * 2 + 2)});
            }
            maxi = max(maxi, (last - first + 1));
        }
        return maxi;
    }
};