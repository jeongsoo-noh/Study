#include <stdio.h>

int Fibonacci(int n)
{
	if (n == 1)
		return 0;
	else if (n == 2)
		return 1;
	// It doesn't matter whether there was else but disassemble result is different
	else
		return Fibonacci(n - 1) + Fibonacci(n - 2);
}

int main()
{
	for (int i = 1; i < 15; i++)
		printf("%d ", Fibonacci(i));

	// 0 1 1 2 3 5 8 13 21 34 55 89 144 233
}