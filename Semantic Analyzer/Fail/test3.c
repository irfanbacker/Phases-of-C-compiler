//Duplicate declaration of function ID

int square(int a)
{
    return a * a;
}

int square(int a)
{
    return a + a;
}

void main()
{
    int value = square(5);
}