#include "bintree.h"
#include <stdio.h>
#include <stdlib.h>

bintree *create_node(char node) {
    bintree *new_node = malloc(sizeof(bintree));
    new_node->node = node;
    new_node->left = NULL;
    new_node->right = NULL;
    return new_node;
}

void print_inorder(bintree *root) {
    if (root == NULL) {
        return;
    }

    bintree *queue[100];
    int front = 0, rear = 0;

    queue[rear] = root;
    rear++;

    while (front != rear) {
        bintree *node = queue[front];
        front++;

        printf("%c ", node->node);

        if (node->left) {
            queue[rear] = node->left;
            rear++;
        }
        if (node->right) {
            queue[rear] = node->right;
            rear++;
        }
    }
}
