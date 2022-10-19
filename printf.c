#include "main.h"
#include <stdarg.h>
/**
 * _printf - prints a formatted string to standard output
 * @format: string to print with formatted output
 * Return: number of characters printed
 */
int _printf(const char *format, ...)
{
	int i = 0;
	va_list list;
	const char *s = format;

	va_start(list, format);
	if (format == NULL || list == NULL)
	{
		return (i);
	}
	while (*s != '\0')
	{
		if (*s == '%')
		{
			s++;
			if (*s == 'c')
			{
				i += _putchar(va_arg(list, int));
				s++;
			}
			else if (*s == 's')
			{
				i += printstring(va_arg(list, char *));
				s++;
			}
			else if (*s == 'd' || *s == 'i')
			{
				i += printint(va_arg(list, int));
				s++;
			}
			else if (*s == '%')
			{
				i += _putchar(*s);
				s++;
			}
			else
			{
				s--;
				_putchar(*s);
				s++;
			}
		}
		_putchar(*s);
		i++;
		s++;
	}
	va_end(list);
	return (i);
}
