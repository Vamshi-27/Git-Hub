// Program to check whether a number is Armstrong number or not

#include <math.h>
#include <stdio.h>

int main()
{
    int num, originalNum, remainder, n = 0;
    float result = 0.0; // Corrected variable name from 'resul' to 'result'

    printf("Enter an integer:\n");
    scanf("%d", &num);

    originalNum = num; // Added missing semicolon

    // Calculate the number of digits in num
    for (originalNum = num; originalNum != 0; ++n)
    {
        originalNum /= 10;
    }

    // Calculate the sum of the nth power of its digits
    for (originalNum = num; originalNum != 0; originalNum /= 10)
    {
        remainder = originalNum % 10;
        result += pow(remainder, n);
    }

    // Check if the sum is equal to the original number
    if ((int)result == num)
        printf("%d is an Armstrong number.", num);
    else
        printf("%d is not an Armstrong number.", num);

    return 0;
}