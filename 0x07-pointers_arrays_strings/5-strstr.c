#include "main.h"
#include <stddef.h>

/**
 * _strstr - locates a substring
 * @haystack: pointer to a string
 * @needle: pointer to substring to be located
 *
 * Return: pointer to beginning of located substring
 * NULL if the substring is not found.
 */
char *_strstr(char *haystack, char *needle)
{
	while (*haystack != '\0' && *needle != '\0')
	{
		char *str = haystack;
		char *substr = needle;

		while (*haystack && *substr && *haystack == *substr)
		{
			haystack++;
			substr++;
		}
		if (!*substr)
			return (str);
		haystack = str + 1;
	}
	return (NULL);
}
