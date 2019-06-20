//program pt a testa macro
#include <cstdlib>
#include <cstdio>

#define N 100
#define SUMA(a, b) a + b
#define P(a, b) a * b

int main()
{
    int a, b;
    int rez;
    a = 5;
    b = 7;
    //rez = SUMA(a, b) * 2;
    rez = P((a + 1), b);
    //rez = SUMA( b, P(a + 2), b));
    printf("%d\n", rez);
    system("pause");
    return 0;
}