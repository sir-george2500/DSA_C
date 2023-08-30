#ifndef MAIN_H
#define MAIN_H
#include <stdlib.h>
#include <stdio.h>

struct Node
{
	int value;
	struct Node *next;
};
typedef struct Node node_t;
void printlist(node_t *head);
#endif
