// Acest program transforma suma de bani din lei in euro

#include <cstdio>
#include <cstdlib>

int main()
{
    float suma;
    printf("Suma de bani in lei este ");
    scanf("%f", &suma);
    printf("Aceasta suma in euro este: %f", suma / 4.67);
    system("PAUSE");
    return 0;
}