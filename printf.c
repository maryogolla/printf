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

	va_start(list, format);
	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
	{
		return (-1);
	}
	while (*format != '\0')
	{
		if (*format == '%')
		{
			format++;
			if (*format == 'c')
			{
				i += _putchar(va_arg(list, int));
				format++;
			}
			else if (*format == 's')
			{
				i += printstring(va_arg(list, char *));
				format++;
			}
			else if (*format == 'd' || *format == 'i')
			{
				i += printint(va_arg(list, int));
				format++;
			}
			else if (*format == '%')
			{
				i += _putchar(*format);
				format++;
			}
			else
			{
				format--;
				_putchar(*format);
				format++;
			}
		}
		_putchar(*format);
		i++;
		format++;
	}
	va_end(list);
	return (i);
}
