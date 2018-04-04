/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
	vector<int> result;

    vector<int> inorderTraversal(TreeNode* root) {
       	helper(root);
       	return result;
    }

    void helper(TreeNode* root) {
    	if (root == NULL) {
        	return;
        }
        helper(root->left);
        result.push_back(root->val);
        helper(root->right);
    }
};