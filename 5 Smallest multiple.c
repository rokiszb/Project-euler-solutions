// 2520 is the smallest number that can be divided by each of the numbers from 1 to 10 without any remainder.
// What is the smallest positive number that is evenly divisible by all of the numbers from 1 to 20?

#include <stdio.h>
#include <stdbool.h>
int x = 0;
bool lookup(int x);
bool pass = false;

int main()
{
    do
    {
        x++;
        pass = lookup(x);

    } while (pass != true);

    // printf("%d\n", x);

    return 0;
}

bool lookup(int x)
{
    bool pass = false;

    for (int i = 1; i <= 20; i++)
    {
        if (x % i == 0)
        {
            pass = true;
        }
        else
        {
            return false;
        }
    }
    printf("%d\n", x);
    printf("%d\n", pass);
    return pass;
}