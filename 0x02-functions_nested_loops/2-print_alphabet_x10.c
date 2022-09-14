#include "main.h"
/**
*print_alphabet_x10 -function to print 10 times
*
*Return:0
*/
void print_alphabet_x10(void)
{
	char c = 'a';
	int i;

	for (i = 0; i < 26; i++)
	{
		_putchar(c + i);
	}
	_putchar(10);
}
