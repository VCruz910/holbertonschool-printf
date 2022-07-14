#include "main.h"
/**
 * find_spec - Finds the specific format.
 * @format: Format to print.
 * @va_list: List of arguments.
 * Return: NULL.
 **/
int find_spec(char format, va_list ptr)
{
	int idx = 0;

	static escoge_t option[] = {
		{"c", print_char},
		{"s", print_string},
		{"d", print_digits},
		{"i", print_digits},
		{NULL, NULL}
	};

	for (; idx < 4; idx++)
	{
		if (*(option[idx].data) == format)
		{
			return (option[idx].function(ptr));
			idx++;
		}
	}
	return ('\0');
}
/**
 * _printf - Produces output according to a format.
 * @format: Character pointer to the format.
 * Return: (count).
 **/
/*_printf code by Victor and Angeira*/
int _printf(const char *format, ...)
{
	/*Variables*/
	/*Var names by Angeira*/
	va_list ptr;
	int idx = 0, count = 0;
	int function;

	/*Codes made by Victor*/
	/*Start of our function*/
	va_start(ptr, format);
	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
		return (-1);

	for (; *(format + idx) != '\0'; idx++)
	{
		if (format[idx] == '%')
		{
			if (format[idx] == '\0')
			{
				return (count);
			}
			function = find_spec(format[idx + 1], ptr);
			if (function != '\0')
			{
				count = count + function;
				idx += 2;
			}
		}
		_putchar(format[idx]);
		count++;
	}

	va_end(ptr);
	return (count);
}
