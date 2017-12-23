#include <catch.hpp>

#include "bubble_sort.h"

TEST_CASE("bubble_sort", "") 
{
 srand(time(NULL));
 const int N = 10;
 
 int nosort[N];
 for (int i = 0; i<N; i++)
 {
 nosort[i] = rand () % 1000;
 }
 
 bubble_sort(&nosort[0], &nosort[N]);

std::vector<int> sorted(nosort, nosort + N);
std::sort(sorted.begin(), sorted.end());
  
  for (int i = 0; i < N; i++) 
  {
        REQUIRE(nosort[i] == sorted[i]);
  }
}
