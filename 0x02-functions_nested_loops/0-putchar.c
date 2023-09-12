#include "main.h"

/**
 * main - Entry point
 *
 * Print "_putchar" using the -putchar function
 * Return: Alwyas 0(Success)
 */
int main(void)
{
	char my_string[] = "_putchar";
	int i = 0;

	while (my_string[i] != '\0')
	{
		_putchar(my_string[i]);
		i++;
	}
	_putchar('\n');
	return (0);
}
