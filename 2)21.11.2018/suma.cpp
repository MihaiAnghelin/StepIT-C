//Acest program calculeaza suma a doua numere
#define _CRT_SECURE_NO_WARNINGS

#include <cstdlib>
#include <cstdio>


int main()
{
    int a, b;
    //int sum;

    printf("Introduceti cele doua numere:\n");
    scanf("%d%d", &a, &b);
    //scanf("%d", &b);

    const int sum = a + b;

    printf("Suma = %d\n", sum);


    system("PAUSE");
    return 0;
}