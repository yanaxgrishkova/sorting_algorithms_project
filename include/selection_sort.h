#include <iostream>
#include <iterator>

template<typename Iterator>
void selection_sort(Iterator first, Iterator last)
{
	for (Iterator i = first; i != last; ++i)
	{
		Iterator min = i;
		for (Iterator it = i + 1; it != last; ++it)
		{
			if (*it < *min)
				std::iter_swap(it, min);
		}
	}
}
