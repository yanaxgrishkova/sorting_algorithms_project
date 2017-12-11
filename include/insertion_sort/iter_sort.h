#pragma once

#include <algorithm>

namespace sortings
{
	class InsertionSort
	{
	public:

		template< class RandomAccessIterator, class Compare >
		static void sort( RandomAccessIterator first, RandomAccessIterator last)
		{
			if (first == last)
				return;

			for (auto i = first; i != last; ++i)
			{
				for (auto j = i; (j != first) && (*j < *(j - 1)); --j)
				{
					std::iter_swap((j - 1), j);
				}
			}
		}

	private:
		InsertionSort();
		~InsertionSort();
	};
}
