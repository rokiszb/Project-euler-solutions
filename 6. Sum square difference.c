// The sum of the squares of the first ten natural numbers is,
// 12 + 22 + ... + 102 = 385

// The square of the sum of the first ten natural numbers is,
// (1 + 2 + ... + 10)2 = 552 = 3025

// Hence the difference between the sum of the squares of the first ten natural numbers and the square of the sum is 3025 − 385 = 2640.

// Find the difference between the sum of the squares of the first one hundred natural numbers and the square of the sum.


#include <stdio.h>
#include <stdlib.h>

int sumSquares = 0, squareOfSums = 0, diff = 0;

int main()
{
    for(int i = 1; i <= 100; i++){
        sumSquares += i*i;
    }

    for(int x = 1; x <= 100; x++){
        squareOfSums += x;
    }

    diff = squareOfSums*squareOfSums - sumSquares;

    printf("difference = %d\n", diff);
}
