//program cu functii

#include <cstdio>
#include <cstdlib>

int sum(int a, int b)
{
    return a + b;
}

int sum(int a, int b, int c)
{
    return a + b + c;
}

void inc(int a);

void inc_functioneaza(int &a)
{
    a++;
}

void inc3(int *a)
{
    (*a)++;
}

int main()
{
    int a = 5;
    int b = 6;
    int c = 7;
    printf("prima suma este %d\n", sum(a, b));
    printf("a doua suma este %d\n", sum(a, b, c));

    inc(a);
    printf("a = %d\n", a);
    inc_functioneaza(a);
    printf("a = %d\n", a);
    inc3(&a);
    printf("a = %d\n", a);
    system("pause");
    return 0;
}

void inc(int a)
{
    a++;
}
