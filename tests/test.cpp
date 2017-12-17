#include <catch.hpp>

#include "sorting_algorithms_project/include/quick_sort/quick_sort_iter.h"

TEST_CASE("QUICK SORT", "") 
{
  int arr[] = {0};
  int* first = &arr[0];
  int* last = &arr[0];
  quick_sort(first, last);
  REQUIRE(arr[0] == 0);
}
  
