#ifndef BINTREE_H
#define BINTREE_H

typedef struct bintree {
    struct bintree *left;
    char node;
    struct bintree *right;
} bintree;

bintree *create_node(char node);
void print_inorder(bintree *root);

#endif
