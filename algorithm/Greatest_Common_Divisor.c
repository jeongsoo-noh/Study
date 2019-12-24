#include <stdio.h>

int main()
{
	int a = 12;
	int b = 39;
	
	while (b != 0)
	{
		int tmp = a % b;
		a = b;
		b = tmp;
	}
	printf("%d", a);
}