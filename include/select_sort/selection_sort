#include <iostream>
#include <iterator>

using namespace std;

template<typename Iterator>
void selSort(Iterator begin, Iterator end)
{
  Iterator min; Iterator it;
  
  for(Iterator i = begin; i != end; ++i)
  {
    min = i;
    for(it = i + 1; it!= end; ++it)
    {
      if(*it < *min)
        swap(*it, *min);
    }   
  }
}
