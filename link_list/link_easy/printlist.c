#include "main.h"
/*printlist print out the list
*Return void
*/
void printlist(node_t *head)
{
	node_t *temporary = head;
	while (temporary != NULL)
	{
		printf("%d->", temporary->value);
		temporary = temporary->next;
	}
	putchar('\n');
}
