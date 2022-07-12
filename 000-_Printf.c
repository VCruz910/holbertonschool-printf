#include "main.h"
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
	unsigned int idx = 0, idx2 = 0;

	/*escoge_t made by Angeira*/
	escoge_t option[] = {
		{'c', print_char},
		{'s', print_int},
		{'d', print_num},
		{'i', print_num},
		{'\0', NULL}
	};

	/*Codes made by Victor*/
	/*Start of our function*/
	va_start(ptr, format);
	if (ptr == NULL || format == NULL)
		return (-1);
	if (format[0] == '%' && format[1] == '\0')
		return (-1);
	/**
	 *for (idx = 0, idx2 = 0; format[idx] != NULL && idx2 < 4; idx++, idx2++)
	 *{
	 *	if(format[idx] == option[idx2].data)
	 *		option[idx2].F;
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
					printf(", ");
			idx2++
		}
		idx++;
	}
	printf("\n");
	va_end(ptr);
}
