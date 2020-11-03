// function declaration and call

#include <stdio.h>

int add(int x, int y)
{
	return (x + y);
}

void main()
{
	int x;
	scanf("%d", &x);
	add(x, 10);
	printf("%d", x);
}
