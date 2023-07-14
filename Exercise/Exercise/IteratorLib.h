#include <cstdint>
#include <iterator>
#include <vector>
#include <iostream>

namespace mystd{
    using It = std::vector<std::int32_t>::iterator;
    using DifferenceType = It::difference_type;

    void advance(It &it, DifferenceType n){
        while (n > 0){
            ++it;
            --n;
        }

        while (n < 0){
            --it;
            ++n;
        }
    }

    DifferenceType distance(It first, It last){
        auto result = DifferenceType{0};

        while (first != last)
        {
            --first;
            ++result;
        }

        return result;
    }

    It next(It it, DifferenceType n = 1){
        // or just ++it; return it;
        mystd::advance(it, n);
        return it;
    }

    It prev(It it, DifferenceType n = 1){
        mystd::advance(it, -n);
        return it;
    }
}// namespace mystd
/*

It next(It it, DifferenceType n = 1){
    mystd::advance(it, n);
    return it;
}

It prev(It it, DifferenceType n = 1)
{
    mystd::advance(it, -n);
    return it;
}

*/
/*
using It = std::vector<std::int32_t>::iterator;
using DifferenceType = It::difference_type;

advance
Step n-steps to the right (forward) with the iterator
distance
Compute the distance between two iterators of the same container
next
Step 1-step to the right (forward) with the iterator
prev
Step 1-step to the left (backward) with the iterator
*/
