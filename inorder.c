struct TreeNode {
    int val;
    struct TreeNode *left;
    struct TreeNode *right;
};

void inorder(struct TreeNode* root, int* arr, int* idx) {
    if (root == NULL) return;
    inorder(root->left, arr, idx);
    arr[(*idx)++] = root->val;
    inorder(root->right, arr, idx);
}

int* inorderTraversal(struct TreeNode* root, int* returnSize) {
    int* arr = (int*)malloc(100 * sizeof(int)); // Allocate result array
    int idx = 0;
    inorder(root, arr, &idx);  // Perform recursive inorder traversal
    *returnSize = idx;
    return arr;
}
