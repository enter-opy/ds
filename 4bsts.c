#include <stdlib.h>
#include <stdio.h>

struct node {
    int data;
    struct node *left;
    struct node *right;
};

struct node *root0, *root1, *root2, *root3;

int main(void) {
    int arr[] = {73, 37, 84, 48, 12, 59};

    for (int i = 0; i < 6; i++) {
        insert_node(arr[i], root0);
    }
}

int insert_node(int data, struct node *root) {
    struct node *new_node = (struct node*) malloc(sizeof(struct node));
    new_node->data = data;
    struct node *current = root;

    if (current == NULL) {

    }
}