#include "main.h"
/**
 * swap_int - this will swap the files;
 * @a: int to swap
 * @b: int to swap;
 */
void swap_int(int *a, int *b)
{
int c;

c = *a;
*a = *b;
*b = c;
}
