// example to showcase a semantic error - passing wrong parameters to a function

#include <stdio.h>

int functionCall(int x)
{
    return x;
}

void main()
{
    int a1 = 1, a2 = 2;
    functionCall(a1, a2);
}
