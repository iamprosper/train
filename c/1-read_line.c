#include "main.h"
/**
 * main - main Program
 * @ac: The number of command line arguments
 * @av: The string of arrays
 *
 * Return: The number of bytes characters read or -1 in case of faillure
 */
int main(int ac, char **av)
{
	char *lineptr = NULL;
	size_t n = 0;

	printf("$ ");
	if (getline(&lineptr, &n, stdin) != -1)
	{
		printf("%s", lineptr);
	}
	if (lineptr != NULL)
		free(lineptr);

	return (0);
}
