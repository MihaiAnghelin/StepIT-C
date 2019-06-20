//exemplu simplu de program cu pointeri
#include <cstdlib>
#include <cstdio>

int main()
{
    int a;
    int *p;
    a = 8;
    p = &a;
    int b = 6;
    a++;
    int *p2;
    p2 = &b;
    (*p2)++;
    p2 = p;
    (*p2)++;
    printf("%d\n ", *p);

    system("pause");
    return 0;
}