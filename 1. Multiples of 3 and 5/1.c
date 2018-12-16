#include <stdio.h>

int main()
{
    int sum = 0;
    for (int i = 0; i < 1000; i++)
    {
        if ((i % 3 == 0) || (i % 5 == 0))
        {
            sum += i;
        }
    }
    printf("The Sum of Multipliers of 3 & 5 Between 0 to 1000 is %d\n", sum);
    return 0;
}
