#include "main.h"

/**
 * _strstr - First occurrence of the substring needle in the string haystack
 * @haystack: Main string to be examined
 * @needle: Searched in haystack
 * Return: (0) Success
 **/

char  *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *l = haystack;
		char *p = needle;

		while (*l == *p && *p != '\0')
		{
			l++;
			p++;
		}

		if (*p == '\0')
			return (haystack);
	}

	return (0);
}
