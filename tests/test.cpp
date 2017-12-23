#include <catch.hpp>

#include "selection_sort.h"

TEST_CASE("selestion_sort", "") 
{
	srand(time(NULL));
	const int size = 1;
	int arr[size];
  
	for (int i = 0; i < size; i++)
  {
		arr[i] = rand() % 1000;
  }
  
	selection_sort(&arr[0], &arr[size]);
  
  std::vector<int> v(array, array + ARRAY_LEN);
  std::sort(v.begin(), v.end());
  
  for (int i = 0; i < ARRAY_LEN; i++) 
  {
        REQUIRE(array[i] == v[i]);
  }
}
