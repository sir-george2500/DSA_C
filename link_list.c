#include "main.h"
/**
 * Simple link list
 * Return a link list
 */
int main(void)
{
	node_t n1, n2, n3;
	node_t *head;

	n1.value = 45;
	n2.value = 8;
	n3.value = 32;


	/*link them together */

	head = &n3;
	n3.next = &n2;
	n2.next = &n1;
	n1.next = NULL;
	printlist(head);
	return (0);
}
