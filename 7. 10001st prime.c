// By listing the first six prime numbers: 2, 3, 5, 7, 11, and 13, we can see that the 6th prime is 13.
// What is the 10 001st prime number?
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int requiredNum = 10001;
int currentNumber = 2;
int primesCount = 0;
int currentCount = 0;

int main(){

    do {
        for(int x = 2; x <= currentNumber; x++){
            if(currentNumber == 2){
                primesCount++;
                break;
            }

            if(currentNumber%x == 0 && x != currentNumber){
                break;
            }

            if(currentNumber%x == 0 && x == currentNumber){
                primesCount++;
                break;
            }
        }
        currentCount++;
        currentNumber++;

    // } while (currentCount != requiredNum);
    } while (primesCount != 10001);

printf("currentNumber %d, primes %d \n ",currentNumber-1,primesCount );

}
