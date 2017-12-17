#include <iostream>
#include <utility>

template <typename Iterator, typename LessThan>
void mergeSortInPlace(Iterator first, Iterator last, LessThan lessThan, size_t size = 0)
{
	if (size == 0 && first != last)
		size = std::distance(first, last);

	if (size <= 1)
		return;
	
	size_t firstHalf = size / 2;
	size_t secondHalf = size - firstHalf;
	Iterator mid = first;
	std::advance(mid, firstHalf);
	
	mergeSortInPlace(first, mid, lessThan, firstHalf);
	mergeSortInPlace(mid, last, lessThan, secondHalf);
	
	Iterator right = mid;
	while (first != mid)
	{
		if (lessThan(*right, *first))
		{
			typename std::iterator_traits<Iterator>::value_type misplaced =
				std::move(*first);
			*first = std::move(*right);
			Iterator scan = right;
			Iterator next = scan;
			++next;
			while (next != last && lessThan(*next, misplaced))
				*scan++ = std::move(*next++);
			*scan = std::move(misplaced);
		}
		++first;
	}
}

template <typename Iterator>
void mergeSortInPlace(Iterator first, Iterator last)
{
	mergeSortInPlace(first, last,
		std::less<typename std::iterator_traits<Iterator>::value_type>());
}
