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

void removeAt(Node** head,int position)
{
  Node *temp = *head;

  if(position == 0)
  {
  	*head = temp->next;
  	free(temp);
	return;
  }


  for(int i = 0; temp!=NULL && i<position;i++)
  {
	  temp = temp->next;
  }

  if(temp == NULL && temp->next == NULL )
  {
	  return;
  }


  Node *nextNode = temp->next->next;

  free(temp->next);
  temp->next = nextNode;
}


void insertAt(Node **head, int position, int data)
{
	Node *new_node = malloc(sizeof(Node));
	
	new_node->val = data;
	new_node->next = NULL;
	
	if(position == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return;
	}
	
	Node *current = *head;
	
	for(int i = 0; current != NULL && i < position; i++)
	{
	    current = current->next;
	}
	
	
	 new_node->next = current->next;	 
	 current->next = new_node;
	
	
}

void reverseList(Node **head)
{
	Node *prev = NULL;
	Node *current = *head;
	Node *next = NULL;
	
	while(current != NULL)
	{
		next = current->next;
		current->next = prev;
		prev = current;
		current = next;
	}
	
	*head = prev
}


int main(void)
{
	Node *head = NULL;

	addElement(&head , 2);
	addElement(&head, 4);
	addElement(&head, 6);
	insertAt(&head, 1, 20);
	insertAt(&head, 2, 30);
	reverseList(&head);
	printList(head);
	return (0);
}
