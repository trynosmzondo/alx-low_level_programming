#include <stdio.h>

/**
 * main - rints all single digit numbers of base 10 starting from 0
 * followed by a new line
 * Return: 0 always
 */
int main(void)
{
	int n;

	for (n = 48; n < 58; n++)
		putchar(n);
	putchar('\n');
	return (0);
}
