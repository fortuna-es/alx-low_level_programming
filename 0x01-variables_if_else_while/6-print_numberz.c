#include <stdio.h>
/**
 * main - main block
 * Description: Print all numbers of base 10, starting from 0.
 * You are not allowed to use any variables of type char.
 * You can only use `putchar` to print to consol.
 * You can onlu use `puchar` twice.
 * Return: 0
 */
int main(void)
{
	int i;
		for (i = 0; i < 10; i++)
		{
			putchar(i + '0');
		}
	putchar('\n');

	return (0);
}
