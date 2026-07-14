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
    TreeNode* solve(vector<int>& nums, int start, int end) {
        if (start > end) {
            return NULL;
        }
        // Find middle element
        int mid = start + (end - start) / 2;
        // Create root node
        TreeNode* root = new TreeNode(nums[mid]);
        // Build left subtree
        root->left = solve(nums, start, mid - 1);
        // Build right subtree
        root->right = solve(nums, mid + 1, end);
        return root;
    }
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        return solve(nums,0,nums.size()-1);
    }
};