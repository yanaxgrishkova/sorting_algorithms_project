#include <catch.hpp>
#include <ctime> 
#include <utility>

#include "selection_sort.h"

//////////////////////////////////// Сортировка рандомных массивов длины 1, 10, 100, 500 и 1000 ////////////////////////////////////

TEST_CASE("selestion_sort") 
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

TEST_CASE("selestion_sort_10") 
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

TEST_CASE("selestion_sort_100") 
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

TEST_CASE("selestion_sort_500") 
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

TEST_CASE("selestion_sort_1000") 
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

//////////////////////////////////// Сортировка обратных массивов длины 10, 100, 500 и 1000 ////////////////////////////////////

TEST_CASE("selestion_sort_1_10") 
{
	srand(time(NULL));
	const int size = 10;
	int arr[size];
  
	for (int i = 0; i < size; i++)
  	{
		arr[i] = size - i;
  	}
  
	selection_sort(&arr[0], &arr[size]);
  
	std::vector<int> v(arr, arr + size);
	std::sort(v.begin(), v.end());
  
	for (int i = 0; i < size; i++) 
	{
		REQUIRE(arr[i] == v[i]);
	}
}

TEST_CASE("selestion_sort_1_100") 
{
	srand(time(NULL));
	const int size = 100;
	int arr[size];
  
	for (int i = 0; i < size; i++)
  	{
		arr[i] = size - i;
  	}
  
	selection_sort(&arr[0], &arr[size]);
  
	std::vector<int> v(arr, arr + size);
	std::sort(v.begin(), v.end());
  
	for (int i = 0; i < size; i++) 
	{
		REQUIRE(arr[i] == v[i]);
	}
}

TEST_CASE("selestion_sort_1_500") 
{
	srand(time(NULL));
	const int size = 500;
	int arr[size];
  
	for (int i = 0; i < size; i++)
  	{
		arr[i] = size - i;
  	}
  
	selection_sort(&arr[0], &arr[size]);
  
	std::vector<int> v(arr, arr + size);
	std::sort(v.begin(), v.end());
  
	for (int i = 0; i < size; i++) 
	{
		REQUIRE(arr[i] == v[i]);
	}
}
	  
TEST_CASE("selestion_sort_1_1000") 
{
	srand(time(NULL));
	const int size = 1000;
	int arr[size];
  
	for (int i = 0; i < size; i++)
  	{
		arr[i] = size - i;
  	}
  
	selection_sort(&arr[0], &arr[size]);
  
	std::vector<int> v(arr, arr + size);
	std::sort(v.begin(), v.end());
  
	for (int i = 0; i < size; i++) 
	{
		REQUIRE(arr[i] == v[i]);
	}
}


//////////////////////////////////// Сортировка обратных массивов, заполненных значениями в промежутке [0; 3] ////////////////////////////////////

TEST_CASE("selestion_sort_2_10") 
{
	srand(time(NULL));
	const int size = 10;
	int arr[size];
  
	for (int i = 0; i < size; i++)
  	{
		arr[i] = rand() % 3;
  	}
  
	selection_sort(&arr[0], &arr[size]);
  
	std::vector<int> v(arr, arr + size);
	std::sort(v.begin(), v.end());
  
	for (int i = 0; i < size; i++) 
	{
		REQUIRE(arr[i] == v[i]);
	}
}

TEST_CASE("selestion_sort_1_100") 
{
	srand(time(NULL));
	const int size = 100;
	int arr[size];
  
	for (int i = 0; i < size; i++)
  	{
		arr[i] = rand() % 3;
  	}
  
	selection_sort(&arr[0], &arr[size]);
  
	std::vector<int> v(arr, arr + size);
	std::sort(v.begin(), v.end());
  
	for (int i = 0; i < size; i++) 
	{
		REQUIRE(arr[i] == v[i]);
	}
}


TEST_CASE("selestion_sort_1_100") 
{
	srand(time(NULL));
	const int size = 1000;
	int arr[size];
  
	for (int i = 0; i < size; i++)
  	{
		arr[i] = rand() % 3;
  	}
  
	selection_sort(&arr[0], &arr[size]);
  
	std::vector<int> v(arr, arr + size);
	std::sort(v.begin(), v.end());
  
	for (int i = 0; i < size; i++) 
	{
		REQUIRE(arr[i] == v[i]);
	}
}
