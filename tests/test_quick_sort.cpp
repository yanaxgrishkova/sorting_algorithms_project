#include <catch.hpp>
#include <ctime> 
#include <utility>

#include "quick_sort.h"

//////////////////////////////////// Сортировка рандомных массивов длины 1, 10, 100, 500 и 1000 ////////////////////////////////////

TEST_CASE("quick_sort") 
{
	srand(time(NULL));
	const int size = 10;
	int arr[size];
  
	for (int i = 0; i < size; i++)
  	{
		arr[i] = rand() % 1000;
  	}
  
	quick_sort(&arr[0], &arr[size]);
	
	std::cout << "runtime = " << clock() / 1000.0 << std::endl;
  
	std::vector<int> v(arr, arr + size);
	std::sort(v.begin(), v.end());
  
	for (int i = 0; i < size; i++) 
	{
		REQUIRE(arr[i] == v[i]);
	}
}
