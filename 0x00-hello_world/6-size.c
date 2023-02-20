#include <stdio.h>
/**
 *main - A program that prints size of varios types
 *
 *Return: 0 (Sucsess)
 */
int main(void)
{
	printf("Size of a char:",sizeof(char));
	printf("Size of an int:" ,sizeof(int));
	printf("Size of a long int:", sizeof(long int));
	printf("Size of a long long int:", sizeof(long long int));
	printf("Size of a float:",sizeof(float));
	return (0);
}
