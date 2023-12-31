#include <stdlib.h>
#include "main.h"
/**
 * str_concat - function that concat two string
 * @s1: destination string
 * @s2: source string
 * Return: pointer to the newly allocated space
 */
char *str_concat(char *s1, char *s2)
{
	int i;
	int s1_len = 0;
	int s2_len = 0;
	char *chstr;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 ==  NULL)
	{
		s2 = "";
	}
	/* string length */
	for (i = 0; s1[i] != '\0'; i++)
	{
		s1_len++;
	}
	for (i = 0; s2[i] != '\0'; i++)
	{
		s2_len++;
	}
	/* Request for memory for s1 */
	chstr = (char *) malloc(sizeof(char) * (s1_len + s2_len + 1));
	if (chstr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < s1_len; i++)
	{
		chstr[i] = s1[i];
	}
	for (i = 0; i < s2_len; i++)
	{
		chstr[s1_len + i] = s2[i];
	}
	return (chstr);
}
