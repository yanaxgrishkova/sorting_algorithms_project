#include <iostream> 
#include <ctime> 
#include <utility>

template <typename Iterator, typename LessThan>
void merge_sort(Iterator first, Iterator last, LessThan lessThan, size_t size = 0)
{
	if (size == 0 && first != last)
		size = std::distance(first, last);

	if (size <= 1)
		return;
	
	size_t first_half = size / 2;
	size_t second_half = size - first_half;
	Iterator middle = first;
	std::advance(middle, first_half);
	
	merge_sort(first, middle, lessThan, first_half);
	merge_sort(middle, last, lessThan, second_half);
	
	Iterator right = middle;
	while (first != middle)
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
void merge_sort(Iterator first, Iterator last)
{
	merge_sort(first, last,
		std::less<typename std::iterator_traits<Iterator>::value_type>());
}
