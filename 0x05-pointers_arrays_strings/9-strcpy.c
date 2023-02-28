#include "main.h"
/**
 * char*_strcpy - this will copiee the string to by stc
 * @dest: cpy
 * @src: copy from
 * Return: strting
 */
char *_strcpy(char *dest, char *src)
{
	int c = 0;
	int x = 0;

	while (*(src + c) != '\0')
	{
		c++;
	}
	for ( ; x < c ; x++)
	{
		dest[x] = src[x];
	}
	dest[c] = '\0';
	return (dest);
}

