#include <stdio.h>
/**
 * main - Main program, print all the arguments without using ac
 * @ac: The number of arguments
 * @av: The array of strings
 *
 * Return: always 0
 */
int main(int __attribute__((__unused__)) ac, char **av)
{
	int i = -1;

	while(av[++i] != NULL)
		printf("%s\n", av[i]);

	return (0);
}
