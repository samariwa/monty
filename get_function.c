#include "monty.h"

/**
 * get_function - select the correct function to perform the operation
 * once given the char (either pall, push, etc)
 * @s: the type of operation as a string
 *
 * Return: pointer to actionable function
 */
int (*get_function(char *cmd))(stack_t **, const int)
{
	int i = 0;
	instruction_t operations[] = {
		{"push", push},
		{"pall", print_all},
		/*{"pint", op_pint},*/
		{"pop", pop},
		/*{"swap", swap},*/
		{"add", add},
		{"nop", NULL},
		{NULL, NULL}
	};

	while (operations[i].opcode != NULL)
	{
		if (strcmp(operations[i].opcode, cmd) == 0)
		{
			return (operations[i].f);
		}
		i++;
	}
	return (NULL);
}
