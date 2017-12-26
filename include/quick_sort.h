#include <iostream>

template <typename BidirectionalIterator>
void quick_sort(BidirectionalIterator first, BidirectionalIterator last)
{
	Iterator pivot = last - 1;
	Iterator j = last - 1;
	Iterator i = first;

	while (i <= j)
	{
		while (*i < *pivot)
		{
			++i;
		}
		while (*j > *pivot)
		{
			--j;
		}
		if (i <= j)
		{
			std::iter_swap(j, i);
			++i;
			--j;
		}
	}

	if (i < last)
		quick_sort(i, last);

	if (first < j)
		quick_sort(first, j + 1);
}
