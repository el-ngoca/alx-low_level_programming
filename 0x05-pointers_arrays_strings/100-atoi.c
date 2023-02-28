#include "main.h"
/**
 * _atoi - this will convert a string to an integer
 * @s: input
 * Return: convert int from the string
 */
int _atoi(char *s)
{
	int i, d, n, b, f, dt;

	i = 0;
	d = 0;
	n = 0;
	b = 0;
	f = 0;
	dt = 0;

	while (s[b] != '\0')
		b++;

	while (i < b && f == 0)
	{
		if (s[i] == '-')
			++d;

		if (s[i] >= '0' && s[i] <= '9')
		{
			dt = s[i] - '0';
			if (d % 2)
				dt = -dt;
			n = n * 10 + dt;
			f = 1;
			if (s[i + 1] < '0' || s[i + 1] > '9')
				break;
			f = 0;
		}
		i++;
	}

	if (f == 0)
		return (0);

	return (n);
}

