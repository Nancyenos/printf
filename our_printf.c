#include "main.h"
#include <stdarg.h>
/**
 * _printf - Printf function
 * @format: format.
 * Return: Printed chars.
 */


int _printf(const char *format, ...)
{
	unsigned int h, return_value = 0;

	va_list param;
	/* printing a string */
	if (format == NULL)
		return (-1);
	va_start(param, format);
	for (return_value = o ; format[h] != '\0' ; h++)
	{
		if (format[h] != '%')
		{
			print(format[h]);
		}
	/*printing a character */
		else if (format[h + 1] == 'c')
		{
			print(va_arg(param, int));
					h++;
		}
		else if (*format == 's')
		{
			char *s = va_arg(param, char *);
			while (*s != '\0')
			{
				print(*s);
				s++;
			}
			return_value += (r_val - 1);
		}
		else if (format[h+1] == '%')
		{
			print('%');
			h++;
		}
		r_value += 1;
	}
	return (return_value);

	/**
	 * print - prints a character
	 * @z: parametter
	 * Return; 0
	 *
	 */

	int print(char c)
	{
		return write(1, &c, 1);
	}
