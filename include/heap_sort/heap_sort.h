#include <iostream>
#include <ctime>

void heapify(int *array, int n, int i)
{
	int largest = i;
	int l = 2 * i + 1;
	int r = 2 * i + 2;

	if (l < n && array[l] > array[largest])
	{
		largest = l;
	}
	
	if (r < n && array[r] > array[largest])
	{
		largest = r;
	}
	
	if (largest != i)
	{
		std::swap(array[i], array[largest]);
		heapify(array, n, largest);
	}
}

void heap_sort(int *array, int n)
{
	for (int i = n / 2 - 1; i >= 0; i--)
	{
		heapify(array, n, i);
	}

	for (int i = n - 1; i >= 0; i--)
	{
		std::swap(array[0], array[i]);
		heapify(array, i, 0);
	}
}
