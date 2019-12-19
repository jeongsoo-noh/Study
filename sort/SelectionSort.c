#include <stdio.h>

#define ASCENDING	1
#define DESCENDING	2

#define ORDER		ASCENDING

#if ORDER == ASCENDING
void SelectionSort(int arr[], int n)
{
	for (int i = 0; i < n - 1; i++)
	{
		int minIdx = i;

		for (int j = i + 1; j < n; j++)
		{
			if (arr[j] < arr[minIdx])
				minIdx = j;
		}
		int tmp = arr[i];
		arr[i] = arr[minIdx];
		arr[minIdx] = tmp;
	}
}
#endif

#if ORDER == DESCENDING
void SelectionSort(int arr[], int n)
{
	for (int i = 0; i < n - 1; i++)
	{
		int maxIdx = i;
		for (int j = i + 1; j < n; j++)
		{
			if (arr[j] > arr[maxIdx])
				maxIdx = j;
		}
		int tmp = arr[i];
		arr[i] = arr[maxIdx];
		arr[maxIdx] = tmp;
	}
}
#endif

int main()
{
	int arr[] = { 5, 2, 4, 3, 1 };

	SelectionSort(arr, sizeof(arr) / sizeof(arr[0]));

	for (int i = 0; i < 5; i++)
		printf("%d ", arr[i]);
}