#include <iostream>
#include <cstdio>

// Define the Node structure
struct Node {
    int data;
    struct Node* next;
} *first = NULL; // Global pointer to the first node

// Helper function to count the number of nodes in the linked list
int count(struct Node* p) {
    int l = 0;
    while (p) {
        l++;
        p = p->next;
    }
    return l;
}

// Function to create a linked list from an array
void create(int A[], int n) {
    int i;
    struct Node *t, *last;
    
    // Create the first node
    first = new Node;
    first->data = A[0];
    first->next = NULL;
    last = first;
    
    // Create and append the remaining nodes
    for (i = 1; i < n; i++) {
        t = new Node;
        t->data = A[i];
        t->next = NULL;
        last->next = t;
        last = t;
    }
}

// Function to display the linked list elements
void Display(struct Node* p) {
    while (p != NULL) {
        printf("%d ", p->data);
        p = p->next;
    }
    printf("\n");
}

// Function to insert a new node at a given index
void Insert(struct Node* p, int index, int x) {
    struct Node* t;
    int i;

    // Validation: Check if the index is valid
    if (index < 0 || index > count(p)) {
        return;
    }

    // Create the new node to be inserted
    t = new Node;
    t->data = x;
    t->next = NULL;

    // Case 1: Inserting at the very beginning (Index 0)
    if (index == 0) {
        t->next = first;
        first = t;
    } 
    // Case 2: Inserting at any other position
    else {
        for (i = 0; i < index - 1; i++) {
            p = p->next;
        }
        t->next = p->next;
        p->next = t;
    }
}

int main() {
    int A[] = {10, 20, 30, 40, 50};
    
    // 1. Create a linked list with 5 elements
    create(A, 5);
    
    // 2. Insert the value 5 at index 0 (the very beginning)
    Insert(first, 0, 5);
    
    // 3. Display the final list
    Display(first);

    return 0;
}