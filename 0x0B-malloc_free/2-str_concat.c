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
	int i, j, m, n = 0;
	char *chstr;
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	/* check for strings length*/
	for (i = 0; s1[i] != '\0'; i++)

	for (j = 0; s2[j] != '\0'; j++)

	/* Request for memory for s1 */
	chstr = (char *) malloc(sizeof(char) * (i + j + 1));
	if (chstr == NULL)
		return (NULL);
	/* concate string */
	for (m = 0; m < i; m++)
		chstr[m] = s1[m];
	while (n < j)
	{
		chstr[i] = s2[n];
		i++;
		n++;
	}
	chstr[i] = '\0';
	return (chstr);
}
