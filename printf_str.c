#include "main.h"
/**
 * _strlen - Returns the lenght of a string.
 * @s: Type character pointer.
 * Return: c.
 */
int _strlen(char *s)
{
	int c;

	for (c = 0; s[c] != 0; c++)
		;
	return (c);

}
/**
 * _strlenc - Strlen function but applied for constant character pointer s
 * @s: Type character pointer.
 * Return: c.
 */
int _strlenc(const char *s)
{
	int c;

	for (c = 0; s[c] != 0; c++)
		;
	return (c);
}
