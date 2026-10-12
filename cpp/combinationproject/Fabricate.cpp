#include "Combination.h"
#include <climits>
int Fabriate(int m,int n)
{
    if (m<0 || n<0 || m<n)
    {
        return -1;
    }

    if (m==0 || m==n)
    {
        return 1;
    }

    if (n>m-n)
    {
        n=m-n;
    }
    int numerator = Multi(m, m-n+1);
    int denominator = Multi(n, 1);

    if (numerator != -1 && denominator != -1)
    {
        return numerator / denominator;
    }
    
    long long result = 1;

    for (int i = 1; i <= n; ++i)
    {
        result = result * (m - n + i) / i;
        if (result > INT_MAX)
        {
            return -1;
        }
    }
    return static_cast<int>(result);
}
