#include "main.h"
/**
 * _islower - checks or lowercase characters
 * @c: The characters to be checked
 * Return: 1 for lower case characters and 0 for anything
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
	return (1);
	}
	return(0);
}
