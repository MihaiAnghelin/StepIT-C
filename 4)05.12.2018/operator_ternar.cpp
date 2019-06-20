//acest program testeaza operatorul ternar
#include <cstdio>
#include <cstdlib>

int main()
{
    /*int B;
    printf("B = ");
    scanf_s("%d", &B);*/

    int a, b;
    printf("a = ");
    scanf_s("%d", &a);
    printf("b = ");
    scanf_s("%d", &b);
    int max = (b > a) ? b : a;
    printf("Maximul este %d\n", max);
    /*while (B != -1)
    {
        (B != 0) ? printf("Numarul este nenul.\n") : printf("Numarul este nul.\n");
        printf("B = ");
        scanf_s("%d", &B);
    }*/

    system("pause");
    return 0;
}