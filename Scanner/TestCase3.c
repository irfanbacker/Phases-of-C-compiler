#include <stdio.h>

int square(int a)
{
    return (a * a);
}

int main()
{
    int num = 2;
    int num2 = square(num);

    printf("Square of %d is %d", num, num2);

    return 0;
    // }

    // This test case demonstrates the error for the mismatched curly brace.
