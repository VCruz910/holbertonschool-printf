#include "main.h"
/**
 * get_escoge - Chooses what type to print.
 * @data: Character for the data to print.
 * @ptr: Variatic arguments.
 * @spaces: spaces for printing.
 * return: 0
 **/
int get_escoge(char data, va_list ptr, int spaces)
{
	escoge_t option[] = {
		{'c', print_char},
		{'s', print_string},
		{'d', print_integer},
		{'i', print_integer},
		{'\0', NULL}
	};
}

/**
 * _printf - Produces output according to a format.
 * @format: Character pointer to the format.
 * Return: (COUNT).
 **/
/*_printf code by Victor and Angeira*/
int _printf(const char *format, ...)
{
	/*Variables*/
	/*Var names by Angeira*/
	va_list ptr;
	int (*f)(va_list ptr);
	int idx = 0, idx2 = 0;

	/*Codes made by Victor*/
	/*Start of our function*/
	va_start(ptr, format);
	if (format == NULL || (format [0] == '%' && format[1] == '\0'))
		return (-1);
	/**
	 *for (idx = 0, idx2 = 0; format[idx] != NULL && idx2 < 4; idx++, idx2++)
	 *{
	 *	if(format[idx] == option[idx2].data)
	 *		option[idx2].f;
	 *}
	 **/
	

	/*Checks for strings*/
	while (format[idx] == option[idx2].data)
	{
		idx2 = 0;
		while (idx2 < 4)
		{
			if (format[idx] == option[idx2].data)
				if (format[idx + 1] != '\0')
					_putchar(", ");
			idx2++;
		}
		idx++;
	}
	_putchar("\n");
	va_end(ptr);
}
