#include <catch.hpp>
#include <ctime>
#include <algorithm>
#include "bubble_sort.h"

//////////////////////////////////// Сортировка рандомных массивов длины 1, 10, 100, 500 и 1000 ////////////////////////////////////

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
  
bool flag = true; 
for (int i = 0; i < N; i++) 
{ 
 if (nosort[i] != sorted[i]) 
 flag = false; 
}
  REQUIRE(flag == true); 
 
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
  
bool flag = true; 
for (int i = 0; i < N; i++) 
{ 
 if (nosort[i] != sorted[i]) 
 flag = false; 
}
  REQUIRE(flag == true);
 
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
  
bool flag = true; 
for (int i = 0; i < N; i++) 
{ 
 if (nosort[i] != sorted[i]) 
 flag = false; 
}
  REQUIRE(flag == true);
 
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
  
bool flag = true; 
for (int i = 0; i < N; i++) 
{ 
 if (nosort[i] != sorted[i]) 
 flag = false; 
}
  REQUIRE(flag == true);
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
  
bool flag = true; 
for (int i = 0; i < N; i++) 
{ 
 if (nosort[i] != sorted[i]) 
 flag = false; 
}
  REQUIRE(flag == true);
}

//////////////////////////////////// Сортировка обратных массивов длины 10, 100, 500 и 1000 ////////////////////////////////////

TEST_CASE("bubble_sort_swap", "") 
{
 srand(time(NULL));
 const int N = 1;
 
 int nosort[N];
 for (int i = 0; i<N; i++)
 nosort[i] = N-i;
 
 
 bubble_sort(&nosort[0], &nosort[N]);

std::vector<int> sorted(nosort, nosort + N);
std::sort(sorted.begin(), sorted.end());
  
bool flag = true; 
for (int i = 0; i < N; i++) 
{ 
 if (nosort[i] != sorted[i]) 
 flag = false; 
}
  REQUIRE(flag == true);
}

TEST_CASE("bubble_sort_swap_1", "N=10") 
{
 srand(time(NULL));
 const int N = 10;
 
 int nosort[N];
 for (int i = 0; i<N; i++)
 {
 nosort[i] = N-i;
 }
 
 bubble_sort(&nosort[0], &nosort[N]);

std::vector<int> sorted(nosort, nosort + N);
std::sort(sorted.begin(), sorted.end());
  
bool flag = true; 
for (int i = 0; i < N; i++) 
{ 
 if (nosort[i] != sorted[i]) 
 flag = false; 
}
  REQUIRE(flag == true);
}

TEST_CASE("bubble_sort_swap_2", "N=100") 
{
 srand(time(NULL));
 const int N = 100;
 
 int nosort[N];
 for (int i = 0; i<N; i++)
 {
 nosort[i] = N-i;
 }
 
 bubble_sort(&nosort[0], &nosort[N]);

std::vector<int> sorted(nosort, nosort + N);
std::sort(sorted.begin(), sorted.end());
  
bool flag = true; 
for (int i = 0; i < N; i++) 
{ 
 if (nosort[i] != sorted[i]) 
 flag = false; 
}
  REQUIRE(flag == true);
 
}

TEST_CASE("bubble_sort_swap_3", "N=500") 
{
 srand(time(NULL));
 const int N = 500;
 
 int nosort[N];
 for (int i = 0; i<N; i++)
 {
 nosort[i] = N-i;
 }
 
 bubble_sort(&nosort[0], &nosort[N]);

std::vector<int> sorted(nosort, nosort + N);
std::sort(sorted.begin(), sorted.end());
  
bool flag = true; 
for (int i = 0; i < N; i++) 
{ 
 if (nosort[i] != sorted[i]) 
 flag = false; 
}
  REQUIRE(flag == true);
}

TEST_CASE("bubble_sort_swap_4", "N=1000") 
{
 srand(time(NULL));
 const int N = 1000;
 
 int nosort[N];
 for (int i = 0; i<N; i++)
 {
 nosort[i] = N-i;
 }
 
 bubble_sort(&nosort[0], &nosort[N]);

std::vector<int> sorted(nosort, nosort + N);
std::sort(sorted.begin(), sorted.end());
  
bool flag = true; 
for (int i = 0; i < N; i++) 
{ 
 if (nosort[i] != sorted[i]) 
 flag = false; 
}
  REQUIRE(flag == true);
}

//////////////////////////////////// Сортировка массивов, заполненных значениями в промежутке [0; 3] ////////////////////////////////////

TEST_CASE("bubble_sort_fewunique", "N=1") 
{
 srand(time(NULL));
 const int N = 1;
 
 int nosort[N];
 for (int i = 0; i<N; i++)
 {
 nosort[i] = rand() % 3 ;
 }
 
 bubble_sort(&nosort[0], &nosort[N]);

std::vector<int> sorted(nosort, nosort + N);
std::sort(sorted.begin(), sorted.end());

bool flag = true; 
for (int i = 0; i < N; i++) 
{ 
 if (nosort[i] != sorted[i]) 
 flag = false; 
}
  REQUIRE(flag == true);
}

TEST_CASE("bubble_sort_fewunique_1", "N=10") 
{
 srand(time(NULL));
 const int N = 10;
 
 int nosort[N];
 for (int i = 0; i<N; i++)
 {
 nosort[i] = rand() % 3 ;
 }
 
 bubble_sort(&nosort[0], &nosort[N]);

std::vector<int> sorted(nosort, nosort + N);
std::sort(sorted.begin(), sorted.end());
  
bool flag = true; 
for (int i = 0; i < N; i++) 
{ 
 if (nosort[i] != sorted[i]) 
 flag = false; 
}
  REQUIRE(flag == true);
}


TEST_CASE("bubble_sort_fewunique_2", "N=100") 
{
 srand(time(NULL));
 const int N = 100;
 
 int nosort[N];
 for (int i = 0; i<N; i++)
 {
 nosort[i] = rand() % 3 ;
 }
 
 bubble_sort(&nosort[0], &nosort[N]);

std::vector<int> sorted(nosort, nosort + N);
std::sort(sorted.begin(), sorted.end());
  
bool flag = true; 
for (int i = 0; i < N; i++) 
{ 
 if (nosort[i] != sorted[i]) 
 flag = false; 
}
  REQUIRE(flag == true);
}

TEST_CASE("bubble_sort_fewunique_3", "N=500") 
{
 srand(time(NULL));
 const int N = 500;
 
 int nosort[N];
 for (int i = 0; i<N; i++)
 {
 nosort[i] = rand() % 3 ;
 }
 
 bubble_sort(&nosort[0], &nosort[N]);

std::vector<int> sorted(nosort, nosort + N);
std::sort(sorted.begin(), sorted.end());
  
bool flag = true; 
for (int i = 0; i < N; i++) 
{ 
 if (nosort[i] != sorted[i]) 
 flag = false; 
}
  REQUIRE(flag == true);
}

TEST_CASE("bubble_sort_fewunique_4", "N=1000") 
{
 srand(time(NULL));
 const int N = 1000;
 
 int nosort[N];
 for (int i = 0; i<N; i++)
 {
 nosort[i] = rand() % 3 ;
 }
 
 bubble_sort(&nosort[0], &nosort[N]);

std::vector<int> sorted(nosort, nosort + N);
std::sort(sorted.begin(), sorted.end());
  
bool flag = true; 
for (int i = 0; i < N; i++) 
{ 
 if (nosort[i] != sorted[i]) 
 flag = false; 
}
  REQUIRE(flag == true);
}
