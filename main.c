#include "monty.h"

int main(int argc, char **argv)
{
	char *file, *buffer, *line_buffer[100], *cmd_buffer[2];
	int fd, i = 0, n = 0;
	ssize_t bytes;

	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}

	file = argv[1];

	fd = open(file, O_RDONLY);
	if (fd == -1)
	{
		fprintf(stderr,
			"Error: Can't open file %s\n", file);
		exit(EXIT_FAILURE);
	}

	buffer = malloc(sizeof(char) * 1024);
	if (buffer == NULL)
	{
		close(fd);
		return (0);
	}

	bytes = read(fd, buffer, 1024);
	close(fd);

	line_separator(line_buffer, buffer);

	while (line_buffer[i] != NULL)
	{
		space_separator(cmd_buffer, line_buffer[i]);

		if (cmd_buffer[1] != NULL)
		{
			n = _atoi(cmd_buffer[i]);
		}
		printf("%d\n", n);
		i++;
	}

}
