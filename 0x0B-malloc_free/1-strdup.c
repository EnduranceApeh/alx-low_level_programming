#include <stdlib.h>
#include "main.h"

/**
 * _strdup - function that return a pointer to a newly allocated space
 * @str: pointer to string
 * Return: pointer to a new string
 */
char *_strdup(char *str)
{
	char *chstr;
	int length = 0;
	int i;

	/* check for string length */
	for (i = 0; str[i] != '\0'; i++)
	{
		length++;
	}
	chstr = (char *) malloc(sizeof(char) * length + 1);

	if (str == NULL)
		return (NULL);
	if (chstr == NULL)
		return (NULL);
	for (i = 0; i < length; i++)
		chstr[i] = str[i];
	return (chstr);
}
