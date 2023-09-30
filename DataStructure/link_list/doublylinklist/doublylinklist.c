#include <stdio.h>
#include <stdlib.h>


typedef struct node 
{
	int val;
	struct node *next;
	struct node *prev;
}Node;

void printList(Node *head){

	if(head == NULL)
	{
	 return;
	}

	while(head!=NULL){
	  printf("%d <=> ", head->val);
	  head = head->next;
	}
	printf("%s\n", "NULL");
}

void addElement(Node **head, int data)
{
	Node *new_node = malloc(sizeof(Node));

	new_node->val = data;
	new_node->next = NULL;
	new_node->prev = NULL;


	if(*head == 0)
	{
	    *head = new_node;
	    return; 
	}

        Node *current = *head;

	while(current->next != NULL)
	{
		current = current->next;
	}

	current->next = new_node;
	new_node = current;
}

void removeAt(Node **head, int position){

if(*head == NULL){
  return;
}

if(position == 0){
    *head = (*head)->next;
    return;
}


Node *current = *head;

for(int i = 0; current != NULL && position -1; i++){

    current = current->next;
}

Node *nextNode = current->next->next;

free(current->next);

nextNode->prev = current;
current->next = nextNode;

}	

int main(void)
{
	Node *head = NULL;

	addElement(&head, 20);
	addElement(&head, 40);

	printList(head);
	
	removeAt(&head, 0); // Remove the node at position 0 (first node)

	printList(head);
	return (0);
}
