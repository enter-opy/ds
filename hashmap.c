#include <stdio.h>
#include <stdlib.h>

#define SIZE 7

int hash_code(int);
void insert_node(int, int);

void print_list(void);

struct node {
    int data;
    struct node *next;
};

struct heap {
    int data;
    struct node* left;
    struct node* right;
};

struct node* bucket[SIZE];

int main(void) {
    int arr[] = {73, 37, 84, 48, 12, 59};

    for (int i = 0; i < 6; i++) {
        insert_node(arr[i], hash_code(arr[i]));
    }

    print_list();
}

int hash_code(int k) {
    return k % SIZE;
}

void insert_node(int data, int key) {
    struct node *new_node = (struct node*) malloc(sizeof(struct node));
    new_node->data = data;

    new_node->next = bucket[key];
    bucket[key] = new_node;

    return;
}

void print_list(void) {
    for (int i = 0; i < SIZE; i++) {
        struct node *current = bucket[i];
   
        while(current != NULL) {
            printf("%d ", current->data);
            current = current->next;
        }
	
        printf("\n");
    }

    return;
}
