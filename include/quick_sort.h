#include <iostream> 

template <typename Iterator>
void quick_sort(Iterator first, Iterator last)
{
	if (first < last)
	{
		Iterator p = partition(first, last);
		quick_sort(first, p - 1);
		quick_sort(p + 1, last);
	}
}

template <typename Iterator>
Iterator partition(Iterator first, Iterator last)
{
	auto temp = *last;
	Iterator i = first - 1;
	for (Iterator j = first; j < last - 1; ++j)
	{
		if (*j <= temp)
		{
			i++;
			std::swap(*i, *j);
		}
	}
	std::swap(*(i + 1), *last);

	return i + 1;
}
