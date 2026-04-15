#include <iostream>
#include <vector>

using namespace std;

struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;

    TreeNode(int value)
        : val(value), left(nullptr), right(nullptr) {}
};

TreeNode* insertBST(TreeNode* root, int value) {
    if (!root)
        return new TreeNode(value);
    if (value < root->val)
        root->left = insertBST(root->left, value);
    else
        root->right = insertBST(root->right, value);
    return root;
}

void inorder(TreeNode* root) {
    if (!root)
        return;
    inorder(root->left);
    cout << root->val << " ";
    inorder(root->right);
}

void preorder(TreeNode* root) {
    if (!root)
        return;
    cout << root->val << " ";
    preorder(root->left);
    preorder(root->right);
}

void postorder(TreeNode* root) {
    if (!root)
        return;
    postorder(root->left);
    postorder(root->right);
    cout << root->val << " ";
}

void deleteTree(TreeNode* root) {
    if (!root)
        return;
    deleteTree(root->left);
    deleteTree(root->right);
    delete root;
}

int main() {
    vector<int> values = {8, 3, 10, 1, 6, 14, 4, 7, 13};
    TreeNode* root = nullptr;

    for (int value : values)
        root = insertBST(root, value);

    cout << "Inorder traversal: ";
    inorder(root);
    cout << "\n";

    cout << "Preorder traversal: ";
    preorder(root);
    cout << "\n";

    cout << "Postorder traversal: ";
    postorder(root);
    cout << "\n";

    deleteTree(root);
    return 0;
}