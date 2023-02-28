#include "main.h"
/**
 * _strlen - this function return the lenght of string
 * @s: input striing parameter
 * Return: return(len)
 */
int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}
