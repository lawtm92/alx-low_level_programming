#include <stdio.h>
/**
*main - combinatins of two numbers
*Return: returns 0
**/
int main(void)
{
	int digit1;
	int digit2;

	for (digit1 = 0; digit1 < 10; digit1++)
	{
	for (digit2 = 0; digit2 < 10; digit2++)
	{
	putchar((digit1 % 10) + '0');
	putchar((digit2 % 10) + '0');
	if (digit1 == 9 || digit2 == 9)
	putchar(',');
	putchar(' ');
	}
	}
	putchar('\n');
	return (0);
}
