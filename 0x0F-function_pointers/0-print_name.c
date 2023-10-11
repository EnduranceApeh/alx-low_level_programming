#include "function_pointers.h"

/**
 * print_name - print name
 * @name: pointer to string
 * @f: function pointer
 */
void print_name(char *name, void (*f)(char *))
{
		f(name);
}
