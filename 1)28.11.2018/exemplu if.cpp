//Program teste instructiunea if
#include<cstdio>
#include<cstdlib>

int main()
{
    int n = 1;
    int a = 26, b = 2;
    float div;
    
    while (n != 0)
    {
        printf("Introduceti numarul de la tastatura:\n");
        scanf_s("%d", &n);
        if (0 == n)
            break;
        if (n % 2 == 0)
        {
            if ((n >= 10) && (n <= 20))
                printf("Numarul e par si mai mare decat 10 si mai mic decat 20\n");
            else
                printf("Numarul nu este in parametrii [10,20]");
        }
        else
        {
            printf("Numarul este impar\n");
        }
    }
    if (b != 0)
    {
        div = (float)a / b;
        printf("rezultatul impartirii %.2f\n", div);
    }
    system("PAUSE");
    return 0;
}