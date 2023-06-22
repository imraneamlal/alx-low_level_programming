#include <stdio.h>

/**
 * largest_number - finds the largest of three integers
 * @a: first integer
 * @b: second integer
 * @c: third integer
 * Return: the largest number
 * * main - prints the largest of 3 integers
 */
int largest_number(int a, int b, int c)
{
	int largest = a;

	if (b > largest)
		largest = b;
	if (c > largest)
		largest = c;

	return (largest);
}

int main(void)
{
	int a, b, c;
	int largest;

	a = 972;
	b = -98;
	c = 0;

		largest = largest_number(a, b, c);

		printf("%d is the largest number\n", largest);

	 return (0);
}
