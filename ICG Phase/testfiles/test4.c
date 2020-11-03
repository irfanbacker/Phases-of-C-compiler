// an example for the code generation in the case of function calling another function

#include <stdio.h>

void function2(int n)
{
	printf("hello from function 2");
}

void function1(int n)
{
	printf("hello from function 1");
	function2(3);
}

void main()
{
	function1(3);
}
