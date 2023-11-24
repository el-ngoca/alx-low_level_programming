#include "main.h"
#include <stdlib.h>
/**
 *malloc_checked - returns a ponter to that memory
 *@b: input data entry
 *
 */
void *malloc_checked(unsigned int b)
{
	void *s;

	s = malloc(b);

	if (s == NULL)
		exit (98);
	return (s);
}
