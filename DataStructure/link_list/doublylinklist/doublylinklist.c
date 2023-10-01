#include <stdio.h>
#include <stdlib.h>


typedef struct node {
	int val;
	struct node *next;
	struct node *prev;
}Node;

void printList(Node *head)
{
	if(head == NULL){
		return;
	}
	
	while(head != NULL){
	  printf("%d <=> ",head->val);
	  head = head->next;
	}
	
	printf("%s\n","NULL");
}

void addElement(Node **head, int data){

//new Node
Node *new_node = malloc(sizeof(Node));

//initialize the new_node
new_node->val = data;
new_node->prev = NULL;
new_node->next = NULL;


//check if the head node is empty 
if(*head == NULL)
{
   *head = new_node;
   return;
}

//declare a Temporary traversal to traverse the link list 
Node *current = *head;

  while(current->next != NULL)
  {
  	current = current->next; 
  }
  current->next = new_node;
  new_node->prev = current;
}


void removeAt(Node **head, int position)
{
  if(*head == NULL){
     *head = (*head)->next;
  }
  
  Node *curr = *head;
  
  for(int i =0; curr != NULL && i <position -1; i++)
  {
     curr = curr->next;
  }
  
  Node *nextNode = curr->next->next;
  
  //check if the node is out of bound
  if(curr == NULL || curr->next == NULL)
  {
  	return;
  }
  
  free(curr->next);
  //check if it's a node in the middle
  
  if(nextNode != NULL)
  {
     nextNode->prev = curr;
  }
  
  curr->next = nextNode;
}



int main(void)
{
    Node *head = NULL;

    addElement(&head, 20);
    addElement(&head, 40);
    addElement(&head, 30);

    printList(head);

    //insertAt(&head, 30, 1); // Insert 30 at position 1

    removeAt(&head, 2); // Remove the node at position 0 (first node)

    printList(head);

    return (0);
}
