#include <iostream> 
#include <ctime> 
#include <utility>

template <typename  ForwardIterator, typename FindMin>
void merge_sort(ForwardIterator first, ForwardIterator last, FindMin min, size_t size = 0)
{
	if (size == 0 && first != last)
		size = std::distance(first, last);

	if (size <= 1)
		return;

	size_t first_half = size / 2;
	size_t second_half = size - first_half;
	ForwardIterator middle = first;
	std::advance(middle, first_half);

	merge_sort(first, middle, min, first_half);
	merge_sort(middle, last, min, second_half);

	ForwardIterator right = middle;

	while (first != middle)
	{
		if (min(*right, *first))
		{
			typename std::iterator_traits<ForwardIterator>::value_type replace =
				std::move(*first);
			*first = std::move(*right);
			ForwardIterator scan = right;
			ForwardIterator next = scan;
			++next;

			while (next != last && min(*next, replace))
			{
				*scan++ = std::move(*next++);
			}

			*scan = std::move(replace);
		}
		++first;
	}
}

template <typename ForwardIterator>
void merge_sort(ForwardIterator first, ForwardIterator last)
{
	merge_sort(first, last,
		std::less<typename std::iterator_traits<ForwardIterator>::value_type>());
}
