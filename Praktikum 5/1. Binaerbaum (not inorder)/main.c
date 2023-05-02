#include <stdio.h>
#include "bintree.h"

int main() {
    bintree *root = create_binary_tree();
    printf("Inorder traversal (left to right):\n");
    print_inorder(root, 0);
    return 0;
}
