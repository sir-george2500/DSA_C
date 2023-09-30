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

	while(head){
	  printf("%d <=> ", head->val);
	}
	printf("%s\n", "NULL");
}


int main(void)
{
	return (0);
}
