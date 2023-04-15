//Given the root of a binary tree, return the inorder traversal of its nodes' values.
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
    vector<int>k;
        void inor(TreeNode*h)
        {
            if(h==NULL)
            {
                return;
            }
            if(h->left)
            {
                inor(h->left);
            }
            k.push_back(h->val);
            if(h->right)
            {
                inor(h->right);
            }
        }
    vector<int> inorderTraversal(TreeNode* root) {
        inor(root);
        return k;
    }
};
 