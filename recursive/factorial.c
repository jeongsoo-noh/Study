#include <stdio.h>

int Factorial(int n)
{
	if (n == 1)
		return 1;
	
	return n * Factorial(n - 1);
}

int main()
{
	printf("%d", Factorial(5));
}