#include "main.h"
/**
 * print_square - function that prints a square, follow by a new line
 * @size: print size
 * return: Always 0
 */

void print_square(int size)
{

	int i;
	int k;

	if (size > 0)
	{
		for (i = 0; i < size; i++)
		{

			for (k = 0; k < size; k++)
			{
				_putchar (35);
			}
			_putchar ('\n');

		}

	}

	else
	{
		_putchar ('\n');
	}

}
