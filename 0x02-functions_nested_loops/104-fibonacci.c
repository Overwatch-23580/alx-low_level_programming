#include <stdio.h>
/**
 * main - main function
 *
 * Return: nothing
 *
 */
int main(void)
{
	unsigned long int a = 1, b = 2, c, count;

	printf("%lu, %lu, ", a, b);

	for (count = 3; count <= 98; count++)
	{
		c = a + b;
		printf("%lu", c);
		if (count < 98)
		{
			printf(", ");
		}
	}
	a = b;
	b = c;
	printf("\n");
	return (0);
}

