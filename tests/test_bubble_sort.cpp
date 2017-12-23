#include <catch.hpp>

#include "bubble_sort.h"

TEST_CASE("bubble_sort", "N=1") 
{
 srand(time(NULL));
 const int N = 1;
 
 int nosort[N];
 for (int i = 0; i<N; i++)
 nosort[i] = rand () % 1000;
 
 
 bubble_sort(&nosort[0], &nosort[N]);

std::vector<int> sorted(nosort, nosort + N);
std::sort(sorted.begin(), sorted.end());
  
  for (int i = 0; i < N; i++) 
  {
        REQUIRE(nosort[i] == sorted[i]);
  }
}


TEST_CASE("bubble_sort2", "N=10") 
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


TEST_CASE("bubble_sort3", "N = 100") 
{
 srand(time(NULL));
 const int N = 100;
 
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


TEST_CASE("bubble_sort4", "N=500") 
{
 srand(time(NULL));
 const int N = 500;
 
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


TEST_CASE("bubble_sort5", "N=1000") 
{
 srand(time(NULL));
 const int N = 1000;
 
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
