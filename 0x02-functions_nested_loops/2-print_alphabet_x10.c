#include "main.h"

/**
 * print_alphabet_x10 - prints aletters 10 times
 */
void print_alphabet_x10(void)
{
	int ten;
	char pa;

	for (ten = 0; ten <= 9; ten++)
	{
		for (pa = 'a'; pa <= 'z'; pa++)
			_putchar(pa);
		_putchar('\n');
	}
}
