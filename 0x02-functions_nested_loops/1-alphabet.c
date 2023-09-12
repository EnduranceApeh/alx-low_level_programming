#include "main.h"

/**
 * main - check the code
 *
 * The print_alphabet function print alphabet from a-z
 * Return: Always 0.
 */
void print_alphabet(void)
{
        char alpha = 'a';

        while (alpha <= 'z')
        {
                _putchar(alpha);
                alpha++;
        }
        _putchar('\n');
}
