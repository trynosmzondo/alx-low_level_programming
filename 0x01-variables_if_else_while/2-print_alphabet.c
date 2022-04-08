#include <stdio.h>

/**
 * main - should print alphabet from a to z in lower case
 *
 * Return: 0 (sucess)
 */

int main(void)
{
	char ch;

	for (ch = 'a', ch <= 'z', ch++)
	
	{
		putchar(ch);
	
	}
	putchar('/n');

	return(0);
}
