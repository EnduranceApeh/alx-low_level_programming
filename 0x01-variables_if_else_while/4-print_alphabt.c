#include <stdio.h>

/**
 * main - Entry point
 *
 * Print alphabet except q and e
 * Return: Always 0(Success)
 */
int main(void)
{
	char alpha = 'a';

	while (alpha <= 'z')
	{
		if (alpha != 'q' && alpha != 'e')
		{
			putchar(alpha);
		}
		alpha++;
	}
	putchar('\n');
	return (0);
}
