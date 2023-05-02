#include <stdio.h>
#include "bintree.h"

int main() {

    bintree *root = NULL;
    root = create_node('A');
    root->left = create_node('B');
    root->right = create_node('C');
    root->left->left = create_node('D');
    root->left->right = create_node('E');
    root->right->left = create_node('F');
    root->right->right = create_node('G');
    root->left->left->left = create_node('H');
    root->left->left->right = create_node('I');
    root->left->right->left = create_node('J');
    root->left->right->right = create_node('K');
    root->right->left->left = create_node('L');
    root->right->left->right = create_node('M');
    root->right->right->left = create_node('N');
    root->right->right->right = create_node('O');

    printf("Left: ");
    print_inorder(root->left);
    printf("\nRight: ");
    print_inorder(root->right);
    printf("\n");

    return 0;
}