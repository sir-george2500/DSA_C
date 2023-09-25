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

	while(head != NULL)
	{
		printf("%d => ", head->val);
		head = head->next;
	}

	printf("%s\n","NULL");
}

void addElement(Node **head, int data)
{
	Node *new_node = malloc(sizeof(Node));

	new_node->val = data;

	new_node->next = NULL;
	
	if(*head == NULL)
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

}

int main(void)
{
	Node *head = NULL;

	addElement(&head , 2);
	addElement(&head, 4);
	printList(head);


	return (0);
}
