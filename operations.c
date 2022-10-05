#include "monty.h"

/**
 * push - add a node on the stack
 * @head: head of the stack
 * @n: number to be added
 *
 * Return: nothing
 */
int push(const int n, stack_t *head)
{
	stack_t *new_node = create_node(n);

	if (head != NULL)
	{
		head->prev = new_node;
	}
	
	new_node->next = head;
	head = new_node;

	return (0);
}

/**
 * pop - remove a node from the stack
 * @head: head of the stack
 *
 * Return: nothing
 */
int pop(stack_t *head)
{
	stack_t *temp = head;

	if (head == NULL)
	{
		return (1);
	}

	temp = temp->next;
	free(head);
	head = temp;
	head->prev = NULL;

	return(0);
}

/**
 * print_all - prints all elements
 * @head: the head of the list
 * Description: n should be 0
 *
 * Return: 0 on success
 */
int print_all(stack_t *head, const int n)
{
	size_t count = n;
	stack_t *temp = head;

	while (head)
	{
		printf("%d\n", head->n);
		head = head->next;
		count++;
	}
	head = temp;
	return (0);
}

/**
 * create_node - creates a new node
 * @n: number to be added
 *
 * Return: the newly created node
 */
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
