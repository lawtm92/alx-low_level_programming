#include "main.h"
/**
*_memset - write a function that fill memory with constant value
*@s: starting address of memory to be fill
*@b: desired value
*@n: number of bytes to be change
*Return: change array with new value for a byte
*/
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
	s[i] = b;
	n--;
	}
	return (0);
}
