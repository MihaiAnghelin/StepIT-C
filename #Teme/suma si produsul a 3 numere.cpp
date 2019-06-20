// Acest program calculeaza suma si produsul a 3 numere

#include <cstdio>
#include <cstdlib>

int main()
{
    int a, b, c;
    printf("A = "); scanf("%d", &a);
    printf("B = "); scanf("%d", &b);
    printf("C = "); scanf("%d", &c);
    printf("A + B + C = %d\n",a + b + c);
    printf("A * B * C = %d\n",a * b * c);
    system("PAUSE");
    return 0;
}