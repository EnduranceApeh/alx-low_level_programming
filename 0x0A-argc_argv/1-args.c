#include <stdio.h>

/**
 * main - print number of arguement passed to program
 * @argc: arguement counter
 * @argv: pointer to array of arguement
 * Return: 0 success
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	if (argc > 0)
		printf("%d\n", argc - 1);

	return (0);

}
