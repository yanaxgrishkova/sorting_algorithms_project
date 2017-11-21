#include <iostream>

template <typename T>
void insertion_sort(T *array, unsigned int size)
{
	for (unsigned int i = 1; i < size; ++i)
	{
		for (unsigned int j = i; j > 0 && array[j - 1] > array[j]; --j)
		{
			std::swap(array[j - 1], array[j]);
		}
	}
}
