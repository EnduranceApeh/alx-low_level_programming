#include <stdio.h>

int main(void)
{
	int j, k;

	for (j = 0; j <= 10; j++)
	{
		for (k = 0; k <= 14; k++)
		{
			putchar('0' + k);
		}
		putchar('\n');
	}
	return(0);
}
