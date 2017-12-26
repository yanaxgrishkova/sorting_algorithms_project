#include <iostream>

template <typename RandomAccessIterator>
void bubble_sort(RandomAccessIterator first, RandomAccessIterator last)
{
    while (first <-- last)
        for (auto i = first; i < last; ++i)
            if (*(i + 1) < *i)
                std::iter_swap(i, i + 1);
}
