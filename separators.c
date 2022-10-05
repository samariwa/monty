#include "monty.h"

/**
 * line_separator - separates the commands in a file
 * @lines: buffer for storing the lines
 * @buffer: the buffer containing the contents of the file
 *
 * Return: nothing
 */
void line_separator(char **lines, char *buffer)
{
	char **temp, *cmd;
	temp = lines;
	piece - strtok(buf, "\n");

	while (piece != NULL)
	{
		*temp++ = cmd;
		cmd = strtok(NULL, "\n");
	}
}

/**
 * space_separator - breakes down lines into atomic commands
 * @cmd: buffer for storing the command
 * @line: the line to be broken donw
 *
 * Return: nothing
 */
void space_separator(char **cmd, char *line)
{
	char **temp, *word;
	temp = cmd;

	word = strtok(line, " ");

	while (piece != NULL)
	{
		*temp++ = word;
		word = strtok(NULL, " ");
	}
}
