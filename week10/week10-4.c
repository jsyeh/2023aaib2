/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
// week10-4.py
// LeetCode 404. Sum of Left Leaves
int sumOfLeftLeaves(struct TreeNode* root) {
    if(root==NULL) return 0; //結束條件
    if(root->left!=NULL && root->left->left==NULL && root->left->right==NULL){
        return root->left->val + sumOfLeftLeaves(root->right);
    }
    return sumOfLeftLeaves(root->left) + sumOfLeftLeaves(root->right);
}