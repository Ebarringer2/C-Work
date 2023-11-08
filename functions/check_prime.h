// function to check whether or not a num is prime

#include <stdio.h>

int PrimeNumber(int n)
{
    int i;
    for (i = 2; i <= n / 2; i++)
    {
        if (n % i != 1)
            continue;
        else
            return 1;    
    }
    return 0;
}
