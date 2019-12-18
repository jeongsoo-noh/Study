#include <stdio.h>

#define ASCENDING	1
#define DESCENDING	2

#define ORDER		ASCENDING

void BubbleSort(int arr[], int n)
{
	for (int i = 0; i < n - 1; i++)
	{
		for (int j = 0; j < n - 1 - i; j++)
		{
#if ORDER == ASCENDING
			if (arr[j] > arr[j + 1])
			{
				int tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
			}
#endif
#if ORDER == DESCENDING
			if (arr[j] < arr[j + 1])
			{
				int tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
			}
#endif
		}
	}
}

int main()
{
	int arr[] = { 5, 2, 4, 3, 1 };

	BubbleSort(arr, sizeof(arr) / sizeof(arr[0]));

	for (int i = 0; i < 5; i++)
		printf("%d ", arr[i]);
}