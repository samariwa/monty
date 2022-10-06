#include "monty.h"

/**
 * push - add a node on the stack
 * @head: head of the stack
 * @n: number to be added
 *
 * Return: nothing
 */
int push(stack_t **head, const int n)
{
	stack_t *new_node = create_node(n);

	if (head != NULL)
	{
		(*head)->prev = new_node;
	}
	
	new_node->next = *head;
	*head = new_node;

	return (0);
}

/**
 * pop - remove a node from the stack
 * @head: head of the stack
 *
 * Return: nothing
 */
int pop(stack_t **head, const int n)
{
	stack_t *temp = *head;

	if (*head == NULL)
	{
		return (1);
	}

	if ((*head)->next != NULL)
	{
		temp = temp->next;
		free(*head);
		*head = temp;
		/*previous = *head;*/
		(*head)->prev = NULL;
		return (1);
	}
	else
	{
		free(temp);
		*head = NULL;
		return (1);
	}
	return (n);
}

/**
 * print_all - prints all elements
 * @head: the head of the list
 * Description: n should be 0
 *
 * Return: 0 on success
 */
int print_all(stack_t **head, const int n)
{
	size_t count = n;
	stack_t *temp = *head;
	int value;
	char *numberArray;

	while (*head)
	{
		value = head[0]->n;
		
		numberArray = itoa(value, 10);
		printf("%s", numberArray);
		*head = head[0]->next;
		count++;
	}
	*head = temp;
	return (0);
}

/**
 * add - adds the values in the sruct
 * @head: the head of the stack
 * @n: the values of the struct to be added
 * 
 * Return: the sum obtained
 */
int add(stack_t **head, const int n)
{

	if (*head == NULL || (*head)->next == NULL)
	{
		perror("Error");
		return (n);

	}
	(*head)->next->n += (*head)->n;
	pop(head, 0);
	return (n);
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
