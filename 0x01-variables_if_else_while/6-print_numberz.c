#include <stdio.h>
/**
 * main - entry point
 * desc: 'print single digit numbers of base 10 starting from 0 using putchar'
 * Return: Always 0
 */
int main(void)
{
	int n;

	for (n = 0; n <= 9; n++)
	{
		putchar(n + 48);
	}
	putchar('\n');
	return (0);
}
