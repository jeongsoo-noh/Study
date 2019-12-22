#include <stdio.h>
#include <stdlib.h>

void Merge(int arr[], int start, int mid, int end)
{
	int partA = start;
	int partB = mid + 1;

	int index = start;
	int *tmpArr = (int*)malloc(sizeof(int) * (end + 1));

	while (partA <= mid && partB <= end)
	{
		if (arr[partA] <= arr[partB])
			tmpArr[index++] = arr[partA++];
		else
			tmpArr[index++] = arr[partB++];
	}

	// if partA is done, move partB remain data
	if (partA > mid)
	{
		for (int i = partB; i <= end; i++, index++)
			tmpArr[index] = arr[i];
	}
	// if partB is done, move partA remain data
	else
	{
		for (int i = partA; i <= mid; i++, index++)
			tmpArr[index] = arr[i];
	}

	for (int i = start; i <= end; i++)
		arr[i] = tmpArr[i];

	free(tmpArr);
}

void MergeSort(int arr[], int start, int end)
{
	int mid;

	if (start < end)
	{
		mid = (start + end) / 2;

		MergeSort(arr, start, mid);
		MergeSort(arr, mid + 1, end);

		Merge(arr, start, mid, end);
	}
}

int main()
{
	int arr[] = { 3, 1, 4, 5, 2, 6 };

	MergeSort(arr, 0, sizeof(arr) / sizeof(arr[0]) - 1);

	for (int i = 0; i < 6; i++)
		printf("%d ", arr[i]);
}