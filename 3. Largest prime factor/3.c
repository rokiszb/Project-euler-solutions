#include <stdio.h>

long long largestPrime(long long number);
long long largestPrimerNumber;

int main()
{
    largestPrime(600851475143);

    return 0;
}

long long largestPrime(long long number)
{
    long long halfPrime = number / 2;

    for (long long i = 2; i < halfPrime; i++)
    {
        if (number % i == 0)
        {
            printf("%lli\n", i);

            for (long long x = 2; x < i - 1; x++)
            {
                if (i % x == 0)
                {

                    printf("%lli\n", largestPrimerNumber);
                    return largestPrimerNumber;
                }
            }

            largestPrimerNumber = i;
        }
    }

    return number;
}