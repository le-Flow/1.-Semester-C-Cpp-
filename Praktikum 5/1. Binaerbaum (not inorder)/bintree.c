#include <stdio.h>
#include <stdlib.h>
#include "bintree.h"

bintree *create_node(char val) {
    bintree *node = malloc(sizeof(bintree));
    node->node = val;
    node->left = NULL;
    node->right = NULL;
    return node;
}

bintree *create_binary_tree() {
    bintree *root = create_node('1');
    root->left = create_node('2');
    root->right = create_node('3');
    root->left->left = create_node('4');
    root->left->right = create_node('5');
    root->right->left = create_node('6');
    root->right->right = create_node('7');
    root->left->left->left = create_node('8');
    root->left->left->right = create_node('9');
    root->left->right->left = create_node('10');
    root->left->right->right = create_node('11');
    root->right->left->left = create_node('12');
    root->right->left->right = create_node('13');
    root->right->right->left = create_node('14');
    root->right->right->right = create_node('15');
    return root;
}

void print_inorder(bintree *root, int level) {
    if (root == NULL) return;
    print_inorder(root->left, level + 1);
    for (int i = 0; i < level; i++) printf("\t");
    printf("%c\n", root->node);
    print_inorder(root->right, level + 1);
}
