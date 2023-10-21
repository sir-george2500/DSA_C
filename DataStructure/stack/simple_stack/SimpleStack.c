#include <stdio.h>
#include <stdlib.h>

#define MAXSIZE 100

typedef struct Stack 
{
	int arr[MAXSIZE];
	int top;
}Stack;


void initializeStack(Stack *stack)
{
	stack->top = -1;
	return;
}

int isEmpty(Stack *stack)
{
	return stack->top == -1;
}

int isFull(Stack *stack)
{
	return stack->top == MAXSIZE - 1;
}

void pushStack(Stack *stack,int data)
{
	if(isFull(stack))
	{
		printf("%s","stack overflowed");
		return;
	}

	stack->top += 1;

	stack->arr[stack->top] = data;
	return;
}

void popStack(Stack *stack)
{
	if(isEmpty(stack))
	{
		printf("%s","stack underflowed");
		return;
	}

	stack->top--;
	return;
}

void printStack(Stack *stack)
{
    if(isEmpty(stack))
    {
        printf("%s", "can not print a empty stack");
        return;
    }

    int curr = stack->top;

    for(int i = 0; i <= curr; i++)  
    {
        printf("%d ",stack->arr[i]); 
    }

    return;
}



int main(void)
{
	Stack stack;
	initializeStack(&stack);
	pushStack(&stack , 20);
	pushStack(&stack , 30);
	pushStack(&stack , 40);

	printStack(&stack);
	return(0);
}
