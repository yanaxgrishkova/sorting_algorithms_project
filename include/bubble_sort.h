#include <iostream>

template <typename ForwardIterator>
void bubble_sort(ForwardIterator first, ForwardIterator last)
{
    while (first <-- last)
        for (ForwardIterator i = first; i < last; ++i)
            if (*(i + 1) < *i)
                std::iter_swap(i, i + 1);
}
