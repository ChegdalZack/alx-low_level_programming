#include <stdio.h>
/**
 * main - entry point
 * desc: 'printing alphabets lowercas in reversee'
 * Return: Always 0
 */
int main(void)
{
int n = 122;

while (n >= 97)
{
putchar(n);
n--;
}
putchar('\n');
return (0);
}
