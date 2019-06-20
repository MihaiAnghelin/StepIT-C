// Acest program calculeaza media aritmetica a doua numere

#include <cstdio>
#include <cstdlib>

int main()
{
    int a, b;
    printf("A = "); scanf("%d", &a);
    printf("B = "); scanf("%d", &b);
    printf("Media lor aritmetica este %.2f", (a + b) / 2.0);
    system("PAUSE");
    return 0;
}