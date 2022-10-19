#include <unistd.h>
#include "main.h"
/**
 * _putchar - writes a single character to standard output
 * @i: character to write
 * Return: 1
 */
int _putchar(char i)
{
	write(1, &i, 1);
	return (1);
}
