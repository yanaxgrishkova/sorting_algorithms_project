#include <catch.hpp>

#include "bubble_sort.h"

TEST_CASE("N=10, int", "") 
{
 srand(time(NULL));
 const int N = 10;
 
 int nosort[N];
 for (int i = 0; i<N; i++)
 nosort[i] = rand () % 1000;
 
std::vector<int> sorted(nosort, nosort + N);
std::sort(sorted.begin(), sorted.end());
  
  for (int i = 0; i < N; i++) 
  {
        REQUIRE(nosort[i] == sorted[i]);
  }
}

TEST_CASE ("N=50, int", "")
{
}
