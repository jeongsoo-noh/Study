#include <stdio.h>

void Swap(int arr[], int idx1, int idx2)
{
	int tmp = arr[idx1];
	arr[idx1] = arr[idx2];
	arr[idx2] = tmp;
}
int Partition(int arr[], int start, int end)
{
	int pivot = arr[start];
	int i = start + 1;
	int j = end;

	while (i <= j)
	{
		while (arr[i] <= pivot && i <= end)
			i++;

		while (arr[j] >= pivot && j > start)
			j--;

		if (i <= j)
			Swap(arr, i, j);
	}

	Swap(arr, start, j);
	return j;
}

void QuickSort(int arr[], int start, int end)
{
	if (start <= end)
	{
		int pivot = Partition(arr, start, end);
		QuickSort(arr, start, pivot - 1);
		QuickSort(arr, pivot + 1, end);
	}
}

int main()
{
	int arr[] = { 3, 1, 5, 7, 4, 2, 6 };

	QuickSort(arr, 0, sizeof(arr) / sizeof(int) - 1);

	for (int i = 0; i < sizeof(arr) / sizeof(int); i++)
		printf("%d ", arr[i]);
}