#include <stdio.h>
#include <stdlib.h>

typedef struct node 
{
	int val;
	struct node *next;
}Node;

void printList(Node *head)
{
	if(head == NULL)
	{
		return;
	}
        
        Node *curr = head;
	
	do{
		printf("%d => ",head->val);
		curr = curr->next;
	}while(curr != head);
	printf("\n");
}

void addElement(Node **head, int data)
{
	Node *new_node = malloc(sizeof(Node));

	new_node->val = data;
	new_node->next = NULL;

	if(*head == NULL)
	{
	        *head = new_node;
		new_node->next = *head;
		return;
	}

	Node *curr = *head;

	while(curr->next != *head)
	{
		curr = curr->next;
	}

	new_node->next = *head;
	curr->next = new_node;
}



int main(void) {

    Node *head = NULL;

    // Test case 1: Adding elements to an empty list
    addElement(&head, 10);
    printList(head); // Output: 10 => 

    // Test case 2: Adding more elements
    addElement(&head, 20);
    addElement(&head, 30);
    addElement(&head, 40);
    printList(head); // Output: 10 => 20 => 30 => 40 => 

    // Test case 3: Adding more elements
    addElement(&head, 50);
    addElement(&head, 60);
    printList(head); // Output: 10 => 20 => 30 => 40 => 50 => 60 => 
     
     
    return (0);
}
