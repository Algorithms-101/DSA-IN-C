#include <stdio.h>
#include <stdlib.h>

// define the node structure for the linked list
struct Node {
  int data;
  struct Node *next;
};

// create a new node with the given data value and next node
struct Node* newNode(int data, struct Node *next) {
  // allocate memory for the new node
  struct Node *node = (struct Node*)malloc(sizeof(struct Node));
  if (node == NULL) {
    printf("Error allocating memory for new node.\n");
    exit(1);
  }

  // initialize the data and next fields of the new node
  node->data = data;
  node->next = next;

  return node;
}



// print the contents of the linked list starting at the given node
void printList(struct Node *node) {
  printf("Linked list: ");
  while (node != NULL) {
    printf("%d ", node->data);
    node = node->next;
  }
  printf("\n");
}

int main() {
  // create a new linked list with 5 nodes
  struct Node *head = newNode(1, NULL);
  head->next = newNode(2, NULL);
  head->next->next = newNode(3, NULL);
  head->next->next->next = newNode(4, NULL);
  head->next->next->next->next = newNode(5, NULL);

  // print the initial list
  printList(head);

  // reverse the list
  head = reverseList(head);

  // print the reversed list
  printList(head);

  return 0;
}
