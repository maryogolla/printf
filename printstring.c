#include "main.h"
/**
 * printstring - prints a string to standard output
 * @s: string to print
 * Return: number of characters in the string excluding
 * null terminating byte
 */
int printstring(char *s)
{
	int i = 0;

	if (s == NULL)
		return (0);
	while (s[i] != '\0')
	{
		_putchar(s[i]);
		i++;
	}
	return (i);
}
