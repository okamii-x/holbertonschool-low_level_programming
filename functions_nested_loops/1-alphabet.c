#include "main.h"
/**
 *main- Prints the alphabet, in lowercase, followed by a new line
 *
 * Return: Always 0
 */
void print_alphabet(void)
{
	char e;

	for (e = 'a'; e <= 'z'; e++)
	{
	_putchar(e);
	}
	_putchar('\n');
}
