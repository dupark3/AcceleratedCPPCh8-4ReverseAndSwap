
#include "my_swap.h"

template <class Bi>
void my_reverse(Bi first, Bi last){
    while (first != last){
        --last;
        if (first != last)
            my_swap(*first++, *last);
    }
}
