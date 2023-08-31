#include "main.h"
/*
 * main for the simple link list
 * Return 0
 */

int main(void)
{
	node_t n1, n2, n3;
       	node_t *head;
	
	/*Create the list */
	
	n1.value = 20;
	n2.value = 25;
	n3.value = 30;
	
	/*link them up together*/
	
	head = &n3;
	n3.next = &n2;	
	n2.next = &n1;
	n1.next = NULL;

	printlist(head);

	return (0);

}
