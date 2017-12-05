#include <iostream>
template <typename Iterator>

  void bubble_sort(Iterator first, Iterator last)
{
    while(first <-- last)
        for(Iterator i = first; i < last; ++i)
            if(*(i + 1) < *i)
                std::iter_swap(i, i + 1);
}
