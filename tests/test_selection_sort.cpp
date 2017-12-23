#include <catch.hpp>
#include <ctime> 
#include <utility>

#include "selection_sort.h"

TEST_CASE("selestion_sort", "size = 1") 
{
	srand(time(NULL));
	const int size = 1;
	int arr[size];
  
	for (int i = 0; i < size; i++)
  	{
		arr[i] = rand() % 1000;
  	}
  
	selection_sort(&arr[0], &arr[size]);
  
	std::vector<int> v(arr, arr + size);
	std::sort(v.begin(), v.end());
  
	for (int i = 0; i < size; i++) 
	{
		REQUIRE(arr[i] == v[i]);
	}
}

TEST_CASE("selestion_sort_10", "size = 10") 
{
	srand(time(NULL));
	const int size = 10;
	int arr[size];
  
	for (int i = 0; i < size; i++)
  	{
		arr[i] = rand() % 1000;
  	}
  
	selection_sort(&arr[0], &arr[size]);
  
	std::vector<int> v(arr, arr + size);
	std::sort(v.begin(), v.end());
  
	for (int i = 0; i < size; i++) 
	{
		REQUIRE(arr[i] == v[i]);
	}
}

TEST_CASE("selestion_sort_100", "size = 100") 
{
	srand(time(NULL));
	const int size = 100;
	int arr[size];
  
	for (int i = 0; i < size; i++)
  	{
		arr[i] = rand() % 1000;
  	}
  
	selection_sort(&arr[0], &arr[size]);
  
	std::vector<int> v(arr, arr + size);
	std::sort(v.begin(), v.end());
  
	for (int i = 0; i < size; i++) 
	{
		REQUIRE(arr[i] == v[i]);
	}
}

TEST_CASE("selestion_sort_500", "size = 500") 
{
	srand(time(NULL));
	const int size = 500;
	int arr[size];
  
	for (int i = 0; i < size; i++)
  	{
		arr[i] = rand() % 1000;
  	}
  
	selection_sort(&arr[0], &arr[size]);
  
	std::vector<int> v(arr, arr + size);
	std::sort(v.begin(), v.end());
  
	for (int i = 0; i < size; i++) 
	{
		REQUIRE(arr[i] == v[i]);
	}
}

TEST_CASE("selestion_sort_1000", "size = 1000") 
{
	srand(time(NULL));
	const int size = 1000;
	int arr[size];
  
	for (int i = 0; i < size; i++)
  	{
		arr[i] = rand() % 1000;
  	}
  
	selection_sort(&arr[0], &arr[size]);
  
	std::vector<int> v(arr, arr + size);
	std::sort(v.begin(), v.end());
  
	for (int i = 0; i < size; i++) 
	{
		REQUIRE(arr[i] == v[i]);
	}
}
