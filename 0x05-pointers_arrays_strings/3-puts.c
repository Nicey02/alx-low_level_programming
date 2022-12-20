#include "main.h"

/**
 * _puts - funtion that prints a string, followed by a new line
 *
 * @str: input string
 *
 */

void _puts(char *str)
{
	int index;

	for (index = 0; str[index] != '\0'; index++)
	{
		_putchar(str[index]);
	}
	_putchar('\n');
}
