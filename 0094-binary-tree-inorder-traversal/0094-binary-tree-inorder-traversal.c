/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
  void tree(struct TreeNode *root,int *ary,int *index){
    if(root==NULL)return;
    tree(root->left,ary,index);
    ary[(*index)++]=root->val;
    tree(root->right,ary,index);
 }

int* inorderTraversal(struct TreeNode* root, int* returnSize) {
       int* result = (int*)malloc(100 * sizeof(int));
    int index = 0;

    tree(root, result, &index);

    *returnSize = index; 
    return result;
}