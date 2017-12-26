#include <iterator>
#include <utility>

template <typename BidirectionalIterator>
void quick_sort(BidirectionalIterator first, BidirectionalIterator last)
{
	BidirectionalIterator pivot = last;
	BidirectionalIterator j = last;
	BidirectionalIterator i = first;

	std::advance(pivot, -1);
	std::advance(j, -1);

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
