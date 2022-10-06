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

/**
 * itoa - a function that converts an integer to a string
 * @val: the integer to be converted to a string
 * @base: the base to which the number is converted
 *
 * Return: the converted string
 */
char *itoa(int val, int base)
{
	static char buf[32] = {0};
	int i = 30;

	for (; val && i ; --i, val /= base)
		buf[i] = "0123456789abcdef"[val % base];

	return (&buf[i + 1]);
}
