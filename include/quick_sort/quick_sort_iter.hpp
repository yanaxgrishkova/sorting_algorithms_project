#pragma once

#include <algorithm>
#include <iterator>
#include <typeinfo>  

template <typename Iterator>
void quick_sort(Iterator first, Iterator last)
{
	if (first < last)
	{
		p = partition(first, last);
		quickSort(first, p - 1);
		quickSort(p + 1, last);
	}
}

template <typename Iterator>
void partition(Iterator first, Iterator last)
{
	auto pivot = *last;
	Iterator i = first - 1;
	for (Iterator j = first; j < last - 1; ++j)
	{
		if (*j <= pivot)
		{
			i++;
			std::swap(*i, *j)
		}
	}
	std::swap(*(i + 1), *last);
	
	return i + 1;
}
