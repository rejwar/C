#include <stdio.h>
#include <stdlib.h>

// Define node structure
struct Node {
    int data;
    struct Node* next;
};

// Function to create a new node
struct Node* createNode(int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    if (newNode == NULL) {
        printf("Memory allocation failed!\n");
        exit(1);
    }
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

// Insert at end
struct Node* insertAtEnd(struct Node* head, int newData) {
    struct Node* newNode = createNode(newData);

    if (head == NULL)
        return newNode;   // new node becomes head

    struct Node* current = head;
    while (current->next != NULL)
        current = current->next;

    current->next = newNode;
    return head;
}

// Insert at position (1-based)
struct Node* insertAtPosition(struct Node* head, int position, int newData) {
    struct Node* newNode = createNode(newData);

    // Insert at beginning
    if (position == 1) {
        newNode->next = head;
        return newNode;
    }

    struct Node* current = head;
    int count = 1;

    while (current != NULL && count < position - 1) {
        current = current->next;
        count++;
    }

    if (current == NULL) {
        printf("Position out of range!\n");
        free(newNode);
        return head;
    }

    newNode->next = current->next;
    current->next = newNode;
    return head;
}

// Delete first node
struct Node* deleteFirstNode(struct Node* head) {
    if (head == NULL) {
        printf("List is already empty!\n");
        return NULL;
    }
    
    struct Node* temp = head;
    head = head->next;
    printf("Deleted first node with value: %d\n", temp->data);
    free(temp);
    
    return head;
}

// Delete last node
struct Node* deleteLastNode(struct Node* head) {
    if (head == NULL) {
        printf("List is already empty!\n");
        return NULL;
    }
    
    // If there's only one node 
    if (head->next == NULL) {
        printf("Deleted last node with value: %d\n", head->data);
        free(head);
        return NULL;
    }
    
    // Traverse to the second last node
    struct Node* current = head;
    while (current->next->next != NULL) {
        current = current->next;
    }
    
    printf("Deleted last node with value: %d\n", current->next->data);
    free(current->next);
    current->next = NULL;
    
    return head;
}

// Delete at any position (1-based)
struct Node* deleteAtPosition(struct Node* head, int position) {
    if (head == NULL) {
        printf("List is empty!\n");
        return NULL;
    }
    
    // If position is 1 (delete first node)
    if (position == 1) {
        return deleteFirstNode(head);
    }
    
    struct Node* current = head;
    struct Node* previous = NULL;
    int count = 1;
    
    // Traverse to the desired position
    while (current != NULL && count < position) {
        previous = current;
        current = current->next;
        count++;
    }
    
    // If position is beyond list length
    if (current == NULL) {
        printf("Position %d is beyond list length!\n", position);
        return head;
    }
    
    printf("Deleted node at position %d with value: %d\n", position, current->data);
    previous->next = current->next;
    free(current);
    
    return head;
}

// Print the linked list
void printList(struct Node* head) {
    struct Node* current = head;
    printf("Linked List: ");
    while (current != NULL) {
        printf("%d -> ", current->data);
        current = current->next;
    }
    printf("NULL\n");
}

// Free entire list
void freeList(struct Node* head) {
    struct Node* temp;
    while (head != NULL) {
        temp = head;
        head = head->next;
        free(temp);
    }
}

// main function
int main() {
    struct Node* head = NULL;

    // Create initial list: 1 -> 2 -> 3 -> 5
    head = insertAtEnd(head, 1);
    head = insertAtEnd(head, 2);
    head = insertAtEnd(head, 3);
    head = insertAtEnd(head, 5);

    printf("Original List:\n");
    printList(head);

    // Insert at position 4: 1 -> 2 -> 3 -> 4 -> 5
    head = insertAtPosition(head, 4, 4);
    printf("\nAfter inserting 4 at position 4:\n");
    printList(head);

    // Test deletion operations
    printf("\n--- Testing Deletion Operations ---\n");
    
    // Delete first node
    head = deleteFirstNode(head);
    printf("After deleting first node:\n");
    printList(head);
    
    // Delete last node
    head = deleteLastNode(head);
    printf("After deleting last node:\n");
    printList(head);
    
    // Delete at position 2
    head = deleteAtPosition(head, 2);
    printf("After deleting node at position 2:\n");
    printList(head);
    
    // Try to delete from invalid position
    head = deleteAtPosition(head, 5);
    printf("After trying to delete at invalid position:\n");
    printList(head);

    // Free memory
    freeList(head);

    return 0;
}