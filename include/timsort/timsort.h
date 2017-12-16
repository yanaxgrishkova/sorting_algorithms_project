#include <iostream>
#include <vector>
#include <algorithm>

#include <insertion_sort.h>
#include <merge_sort.h>

template <typename Iterator>
void tim_sort(Iterator begin, Iterator end, int N)
{
	int r = 0;          
		while (N >= 64)
		{
			r |= N & 1;
			N >>= 1;
		}
	int minrun = N + r;

	int max = 0;
	int min = 0;

	vector<int> c(N, 0);
	for (Iterator i = begin; i < end; ++i)
	{
		if ((*i < *(i + 1)) max++
		else min++;
		
		c[i] = i*;

		if (abs(max - min) != max || abs(max - min) != min)
		{
			if (abs(max - min) != min)
			{
			
				//while (c[i] ! = 0) c.pop.back(); - может удалится эл-т равный 0//
				for (int a = 0; a < i / 2; a++)
					swap(run[a], run[i - a - 1]);
			}
		}
		
		if (k < minrun)
		{
			vector<int> c1((min - i), 0);
			insertion_sort(begin + *k));
		}
}
