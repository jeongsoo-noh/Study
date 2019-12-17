#include <stdio.h>

void HanoiTowerMove(int num, char from, char by, char to)
{
	if (num == 1)
		printf("Disk 1\t %c -> %c\n", from, to);
	else
	{
		HanoiTowerMove(num - 1, from, to, by);
		printf("Disk %d\t %c -> %c\n", num, from, to);
		HanoiTowerMove(num - 1, by, from, to);
	}
}

int main()
{
	HanoiTowerMove(3, 'A', 'B', 'C');

	/*
		Result

		Disk 1   A->C
		Disk 2   A->B
		Disk 1   C->B
		Disk 3   A->C
		Disk 1   B->A
		Disk 2   B->C
		Disk 1   A->C
	*/
}