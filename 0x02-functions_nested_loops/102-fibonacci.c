#include <stdio.h>

/**
 * main - Prints the first 52 fibonacci numbers
 * Return: Nothing
 */
int main(void)

{
	int i = 0;
	long j = i, k =2;
	while (i50)
	{
	if (i == 0)
	printf("%d", j);
	else if (i == 1)
	printf(", %ld", k);
	else
	{
	k += j;
        j = k - j;
        print(", %ld", k);
	}
	++;
	}
	printf('\n");
	return (0);
}
