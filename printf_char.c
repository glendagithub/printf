#include "main.h"

/**
 * printf_char - prints a char.
 * @val: arguments.
 * Return: 1.
 */
int print_char(va_list list)
{
	int aux;

	aux = va_arg(list, int);

	_putchar(aux);

	return (1);
}
