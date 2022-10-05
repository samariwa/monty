#include "monty.h"
/**
 * _atoi - change string to int
 * @string: string to be changed
 *
 * Return: int change of string
 */
int _atoi(char *string)
{
	int result = 0, sign = 1, i = 0;

	if (string[0] == '-')
	{
		sign = -1;
		i++;
	}
	for (; string[i] != '\0'; i++)
	{
		result = result * 10 + string[i] - '0';
	}
	return (sign * result);
}
