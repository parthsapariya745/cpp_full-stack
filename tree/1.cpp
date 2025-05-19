#include<iostream>
using namespace std;

struct tree {
    int data;
    tree *left;
    tree *right;

    tree(int val) {
        data = val;
        left = right = NULL;
    }
};
void preOrder(tree *root) {
    if (root == NULL) return;
    
    cout << root->data << " ";
    preOrder(root->left);
    preOrder(root->right);
}
void inOrder(tree *root) {
    if (root == NULL) return;
    
    inOrder(root->left);
    cout << root->data << " ";
    inOrder(root->right);
}
void postOrder(tree *root) {
    if (root == NULL) return;
    
    postOrder(root->left);
    postOrder(root->right);
    cout << root->data << " ";
}
int main() {
    tree *root = new tree(1);
    root->left = new tree(2);
    root->right = new tree(3);
    root->left->left = new tree(4);
    root->left->right = new tree(5);
    root->right->left = new tree(6);
    root->right->right = new tree(7);

    cout << "PRE-ORDER  : ";
    preOrder(root);
    cout << endl << "--------------------------" << endl;
    cout << "IN-ORDER   : ";
    inOrder(root);
    cout << endl << "--------------------------" << endl;
    cout << "POST-ORDER : ";
    postOrder(root);

    //             1
    
    //     2               3

    // 4       5       6        7 
}