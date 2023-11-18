#include "main.h"

/**
 * _printf - produces output according to a format
 *@format: format specifier
 * Return: number of bytes outputted
 */
int _printf(const char *format, ...);
{
	unsigned int i;
	int count = 0;

	va_list arg;

	if (!format || (format[0] == '%' && format[1] == '\0'))
		return (-1);

	va_start(arg, format);
	for (i = 0; format[i] != '\0'; i++)
		if (format[i] != '%')
		{
			ptchar(format[i]);
		}
}
