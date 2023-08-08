#include "main.h"
#include <stdlib.h>

/**
 * _strdup - Pointer to the newly allocated space
 * @str: character
 *
 * Return: Null if there's insufficient memory,pointer if not
 */

char *_strdup(char *str)
{
	char *eee;
	int i, r = 0;

	if (str == NULL)
		return (NULL);
	i = 0;
	while (str[i] != '\0')
		i++;

	eee = malloc(sizeof(char) * (i + 1));

	if (eee == NULL)
		return (NULL);

	for (r = 0; str[r]; r++)
		eee[r] = str[r];

	return (eee);
}
