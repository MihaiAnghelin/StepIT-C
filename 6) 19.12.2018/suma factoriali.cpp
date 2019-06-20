// program care calculeaza suma (1/1) * 0! + (1/2) * 1! + ... + (1/n) * (n-1)!

#include <cstdio>
#include<cstdlib>

int main()
{
    int n;
    printf("Introduceti numarul: ");
    scanf_s("%d", &n);
    float sum = 0; int f = 1;
    for (int i = 0; i <= n; i++)
    {
        if (i == 0);
        else
            f *= i;
        sum += ((1.0 / (i + 1)) * f);

    }

    printf("Rezultateul obtinut este %f.\n", sum);
    system("PAUSE");
    return 0;
}