int add(int a, int b)
{
    return a + b;
}

int subtract(int a, int b)
{
    return a - b;
}

int mutiply(int a, int b)
{
    return a * b;
}

int devide(int a, int b)
{
    return a / b;
}

int power(int a, int b)
{
    int s = a;
    for (int i = 1; i < b; i++)
    {
        s = s * a;
    }

    return b == 0 ?  1 : s;
}