#include <iostream>
#include <iterator>
#include <algorithm>
#include <vector>

template <typename ForwardIterator> 
void counting_sort(ForwardIterator first, ForwardIterator last) 
{
	auto min_max = std::minmax_element(first, last);
	
	if (min_max.first == min_max.second) 
	{ 
		return;
	}
	
	auto min = *min_max.first;
	auto max = *min_max.second;
	std::vector<int> c((max - min) + 1, 0);
	
	for (auto i = first; i != last; ++i) 
	{
		++c[*i - min];
	}
	
	for (auto i = min; i <= max; ++i) 
	{
		for (auto j = 0; j < c[i - min]; ++j) 
		{
			*first++ = i;
		}
	}
}
