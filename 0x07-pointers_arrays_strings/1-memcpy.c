#include "main.h"
/**
*_memcpy - Copies memory area
*@dest: where to copy the memory to
*@n: the number of bytes
*@src: the memory area to copy from
*Return: a pointer to @dest
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
		dest[a] = src[a];
	return (dest);
}
