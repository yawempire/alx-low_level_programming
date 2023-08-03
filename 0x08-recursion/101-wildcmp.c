#include "main.h"

/**
  * wildcmp - Comparing of strings
  * @s1: First string
  * @s2: Second string
  * @s: String for next function
  *
  * Return: (1) if equal, (0) or not equal
  */

int is_end_of_string(char *s);

int wildcmp(char *s1, char *s2)
{
	if (is_end_of_string(s2))
	{
		return (is_end_of_string(s1));
	}
	else if (*s2 == '*')
	{
		if (is_end_of_string(s2 + 1))
		{
			return (1);
		}
		else if (*s1 == '\0')
		{
			return (wildcmp(s1, s2 + 1));
		}
		else
		{
			return (wildcmp(s1, s2 + 1) || wildcmp(s1 + 1, s2));
		}
	}
	else
	{
		return ((*s1 == *s2) && wildcmp(s1 + 1, s2 + 1));
	}
}

/**
  * is_end_of_string - Check if it's string or not
  * @s: String arg
  *
  * Return: (1) if string, (0) or not
  */

int is_end_of_string(char *s)
{
	return (*s == '\0');
}
