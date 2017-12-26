#include <iterator>
#include <utility>

template<typename ForwardIterator>
void selection_sort(ForwardIterator first, ForwardIterator last)
{
	for (auto i = first; i != last; ++i)
	{
		ForwardIterator min = i;
		for (auto it = i, std::advance(it, 1); it != last; ++it)
		{
			if (*it < *min)
				std::iter_swap(it, min);
		}
	}
}
