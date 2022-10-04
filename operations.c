#include "monty.h"

void push(int n, stack_t *stack)
{
	stack_t *temp = stack;
	while (temp->next != NULL)
	{
		temp = temp->next;
	}

	temp->next = create_node(n);
	temp->next->prev = temp;
}

void pop()
{

}

void dequeue()
{

}

void enqueue(int n)
{

}

stack_t *create_node(int n)
{
	stack_t *new_node = malloc(sizeof(stack_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->prev = NULL;
	new_node->n = n;
	new_node->next = NULL;

	return(new_node);
}
