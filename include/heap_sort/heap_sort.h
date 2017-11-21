#include <iostream>

template <typename T>
void heapify(T *array, unsigned int size, unsigned int i)
{
	unsigned int largest = i;
	unsigned int _left = 2 * i + 1;
	unsigned int _right = 2 * i + 2;

	if (_left < size && array[_left] > array[largest])
	{
		largest = _left;
	}

	if (_right < size && array[_right] > array[largest])
	{
		largest = _right;
	}

	if (largest != i)
	{
		std::swap(array[i], array[largest]);
		heapify(array, size, largest);
	}
}

template <typename T>
void heap_sort(T *array, unsigned int size)
{
	for (unsigned int i = size / 2 - 1; i >= 0; i--)
	{
		heapify(array, size, i);
	}

	for (unsigned int i = size - 1; i >= 0; i--)
	{
		std::swap(array[0], array[i]);
		heapify(array, i, 0);
	}
}
