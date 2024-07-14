// Program for check the prime numbers in a given range

#include <stdio.h>
#include<stdlib.h>
#include <math.h>

int main()
{
    int low, high, i, flag;
    printf("Enter two numbers(intervals): ");
    scanf("%d %d", &low, &high);

    printf("Prime numbers between %d and %d are: ", low, high);

    // Iterate from low to high
    for (i = low + 1; i < high; ++i)
    {
        flag = 0;

        // Skip 0 and 1 as they are neither prime nor composite
        if (i == 0 || i == 1)
            continue;

        for (int j = 2; j <= sqrt(i); ++j)
        {
            if (i % j == 0)
            {
                flag = 1;
                break;
            }
        }

        if (flag == 0)
            printf("%d ", i);
    }

    return 0;
}
