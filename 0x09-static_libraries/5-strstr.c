#include "main.h"
/**
 * _strstr - Locates a substring.
 * @haystack: The string to be searcghed.
 * @needle: The substring to be located
 * Return: If the substring ias loacted - a pointer to the beginning
 * of the lacated substring
 * If the substring is not loacted - NULL
 */
char *_strstr(char *haystack, char *needle)
{
	int index;

	if (*needle == 0)
		return (haystack);
	while (*haystack)
	{
		index = 0;

		if (haystack[index] == needle[index])
		{
			do {
				if (needle[index + 1] == '\0')
					return (haystack);
				index++;
			} while (haystack[index] == needle[index]);
		}
		haystack++;
	}
	return ('\0');
}
