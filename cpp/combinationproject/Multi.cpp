#include"Combination.h"
#include <climits>

int Multi(int m, int n) {
    if (m<n || n<1)
    {
        return -1;
    }
    long long product = 1;

    for (int i=m;;--i)
    {
        if(product>INT_MAX/i)
        {
            return -1;
        }
        product *= i;
        if (i ==n)
        {
            break;
        }
    }
    return static_cast<int>(product);
}