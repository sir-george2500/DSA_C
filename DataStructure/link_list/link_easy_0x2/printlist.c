#include "main.h"

void printlist(node_t *head)
{
	node_t *temporary = head;
	while(temporary != NULL)
	{
		printf("%d -> ",temporary->value);
		temporary = temporary->next;
	}
	putchar('\n');
}
