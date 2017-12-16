#include <iostream>
#include <vector>
#include <algorithm>

template <typename Iterator>
void insertion_sort(Iterator first, Iterator last)
{
	if (first >= last)
	{
		return;
	}
	for (Iterator i = first; i != last; ++i)
	{
		for (Iterator j = i; (j != first) && (*j < *(j - 1)); --j)
		{
			std::iter_swap((j - 1), j);
		}
	}
}

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



template <typename Iterator>
void tim_sort(Iterator begin, Iterator end, int N)
{
	int r = 0;          
		while (N >= 64)
		{
			r |= N & 1;
			N >>= 1;
		}
	int minrun = N + r;

	int max = 0;
	int min = 0;

	vector<int> c(N, 0);
	for (Iterator i = begin; i < end; ++i)
	{
		if ((*i < *(i + 1)) max++
		else min++;
		
		c[i] = i*;

		if (abs(max - min) != max || abs(max - min) != min)
		{
			if (abs(max - min) != min)
			{
			
				//while (c[i] ! = 0) c.pop.back(); - может удалится эл-т равный 0//
				for (int a = 0; a < i / 2; a++)
					swap(run[a], run[i - a - 1]);
			}
		}
		
		if (k < minrun)
		{
			vector<int> c1((min - i), 0);
			insertion_sort(begin + *k));
		}
}
