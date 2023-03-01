#include "main.h"
/**
 * char *_strcat - this will concatinate the two phrases
 * @dest: input
 * @src: input
 * Return: dest (concatinated)
 */
char *_strcat(char *dest, char *src)
{
	int dest_len = 0;
	int i = 0;

	while (dest[i++])
	{
		dest_len++;
	}
	for (i = 0;src[i]; i++)
		dest[dest_len++] = src[i];

	return (dest);
}
