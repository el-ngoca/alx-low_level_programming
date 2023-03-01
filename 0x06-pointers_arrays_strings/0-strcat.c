#include "main.h"
/**
 * char *_strcat - this will concatinate the two phrases
 * @dest: input
 * @src: input
 * Return: dest (concatinated)
 */
char *_strcat(char *dest, char *src)
{
	int dest_len = strlen(dest);
	int i;

	while(i = 0; src[i] ; i++)
	{
		dest[dest_len + i] = src [i];
	}
	dest[dest_len + i]= '\0';
	return dest;
}
