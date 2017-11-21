#include <iostream>

template <typename T>
void merge(T *array, T *buffer, int left, int middle, int right)
{
	int _left = 0;
	int _right = 0;

	while (left + _left < middle && middle + _right < right)
	{
		if (less(array[left + _left], array[middle + _right]))
		{
			buffer[_left + _right] = array[left + _left];
			_left++;
		}
		else
		{
			buffer[_left + _right] = array[middle + _right];
			_right++;
		}
	}

	while (left + _left < middle)
	{
		buffer[_left + _right] = array[left + _left];
		_left++;
	}

	while (middle + _right < right)
	{
		buffer[_left + _right] = array[middle + _right];
		_right++;
	}

	for (int i = 0; i < _left + _right; i++)
	{
		array[left + i] = buffer[i];
	}
}

template <typename T>
void merge_sort(T *array, T *buffer, int left, int right)
{
	if (right - left <= 1)
	{
		return;
	}

	int middle = left + (right - left) / 2;

	merge_sort(array, buffer, left, middle);
	merge_sort(array, buffer, middle, right);

	merge(array, buffer, left, middle, right);
}
