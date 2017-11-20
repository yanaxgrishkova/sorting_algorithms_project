#include <iostream>
#include <ctime>

static bool less(const int &a, const int &b)
{
	return a < b;
}

void print(int *array, int n)
{
	for (int i = 0; i < n; i++)
	{
		std::cout << array[i] << " ";
	}
	std::cout << std::endl;
}

void randomize(int *array, int n)
{
	srand(time(NULL));
	for (int i = 0; i < n; i++)
	{
		array[i] = rand() % 100;
	}
}

void merge(int *array, int *buffer, int left, int middle, int right)
{
	int it_left = 0;
	int it_right = 0;

	while (left + it_left < middle && middle + it_right < right)
	{
		if (less(array[left + it_left], array[middle + it_right]))
		{
			buffer[it_left + it_right] = array[left + it_left];
			it_left++;
		}
		else
		{
			buffer[it_left + it_right] = array[middle + it_right];
			it_right++;
		}
	}

	while (left + it_left < middle)
	{
		buffer[it_left + it_right] = array[left + it_left];
		it_left++;
	}

	while (middle + it_right < right)
	{
		buffer[it_left + it_right] = array[middle + it_right];
		it_right++;
	}

	for (int i = 0; i < it_left + it_right; i++)
	{
		array[left + i] = buffer[i];
	}
}

void merge_sort(int *array, int *buffer, int left, int right)
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
