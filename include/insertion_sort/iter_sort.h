#pragma once

#include <algorithm>

template typename Iterator>
void sort (Iterator first, Iterator last)
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
