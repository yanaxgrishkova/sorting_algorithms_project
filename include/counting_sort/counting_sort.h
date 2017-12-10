#include <iostream>
#include <iterator>
#include <algorithm>
#include <vector>

using namespace std;

template<typename Iterator> 
void counting_sort(Iterator begin, Iterator end) 
{
	auto min_max = minmax_element(begin, end);
	if (min_max.first == min_max.second) 
	{ 
		return;
	}
	auto min = *min_max.first;
	auto max = *min_max.second;
	vector<int> c((max - min) + 1, 0);
	
	for (auto i = begin; i != end; ++i) 
	{
		++c[*i - min];
	}
	
	for (auto i = min; i <= max; ++i) 
	{
		for (int j = 0; j < c[i - min]; ++j) 
		{
			*begin++ = i;
		}
	}
}
