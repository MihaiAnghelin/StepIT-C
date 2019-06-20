//Program pentru calcularea valorii cumparaturilot
#define _CRT_SECURE_NO_WARNINGS
#include <cstdlib>
#include <cstdio>

int main()
{
    int nr;
    float pret, discount, pret_final;

    printf("Introduceti pretul: ");
    scanf("%f", &pret);
    printf("Introduceti discount-ul: ");
    scanf("%f", &discount);
    printf("Introduceti numarul de obiecte dorit: ");
    scanf("%d", &nr);

    pret_final = (1 - discount) * pret *nr;

    printf("Pretul final este %.2f. \n", pret_final);

    system("PAUSE");
    return 0;
}