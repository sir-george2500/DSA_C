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

int main(void)
{
	Node *head = malloc(sizeof(head));

	head->val =2;

	Node *second = malloc(sizeof(second));

	head->next = second;

	second->val = 4;

	second->next= NULL;

	printList(head);

	free(head);
	free(second);

	return (0);
}
