#pragma once

#include <algorithm> 

template <typename Iterator>
void sort(Iterator first, Iterator last, Iterator firstCopy, long lo, long hi, Compare& comp )
{
	if( hi <= lo ) 
		return;
	long mid = lo + ( hi - lo ) / 2;
	sort( first, last, firstCopy, lo, mid, comp );
	sort( first, last, firstCopy, mid + 1, hi, comp );
	merge( first, last, firstCopy, lo, mid, hi, comp );
}

template <typename Iterator>
void merge(Iterator first, Iterator last, Iterator firstCopy, long lo, long mid, long hi, Compare& comp)
{
	std::copy( first + lo, first + hi, firstCopy + lo );

	auto i = lo, j = mid + 1;
      
	for( auto k = lo; k != (hi + 1); k++ )
	{
		if	( i > mid )								
			first[k] = firstCopy[j++];
		else if	( j > hi )								
			first[k] = firstCopy[i++];
		else if ( comp( firstCopy[j], firstCopy[i] ) )	
			first[k] = firstCopy[j++];
		else											
			first[k] = firstCopy[i++];
	}
}
