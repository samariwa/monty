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
	cmd = strtok(buffer, "\n");
	
	if (cmd == NULL)
        {
                lines[0] = "";
        }
	while (cmd != NULL)
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
	int i = 0;
	if (word == NULL)
	{
		cmd[0] = "";
	}
	while (word != NULL)
	{
		temp[i] = word;
		word = strtok(NULL, " ");
		i++;
		printf("%s\n", temp[i]);
	}
	temp[i] = NULL;
}
