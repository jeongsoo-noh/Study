#include <stdio.h>

void InsertionSort(int arr[], int n)
{
	int j;

	for (int i = 1; i < n; i++)
	{
		int key = arr[i];

		for (j = i - 1; j >= 0; j--)
		{
			if (arr[j] > key)
				arr[j + 1] = arr[j];
			else
				break;
		}
		arr[j + 1] = key;
	}
}

int main()
{
	int arr[] = { 5, 3, 2, 4, 1 };

	InsertionSort(arr, sizeof(arr) / sizeof(arr[0]));

	for (int i = 0; i < 5; i++)
		printf("%d ", arr[i]);
}