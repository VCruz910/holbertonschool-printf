#include "main.h"
/**
 * _printf - Produces output according to a format.
 * @format: Character pointer to the format.
 * Return: (0).
 **/
/*_printf code by Victor and Angeira*/
int _printf(const char *format, ...)
{
	/*Variables*/
	/*Var names by Angeira*/
	va_list ptr;
	int idx = 0, idx2 = 0;

	escoge_t option[] = {
		{"c", print_char},
		{"s", print_string},
		{"d", print_digits},
		{"i", print_digits},
		{'\0', NULL}
	};

	/*Codes made by Victor*/
	/*Start of our function*/
	va_start(ptr, format);
	if (format == NULL || (format [0] == '%' && format[1] == '\0'))
		return (-1);

	for (idx = 0; *(format + idx) != '\0'; idx++)
	{
		if (format[idx] == '%')
		{
			for(idx2 = 0; idx2 < 4; idx2++)
			{
				if(*(format + (idx + 1)) == *(option[idx2].data))
				{
					option[idx2].f(ptr);
				}
			}
		}
		_putchar(format[idx]);
	}
	/*_putchar('\n');*/
	va_end(ptr);
	return (0);
}
