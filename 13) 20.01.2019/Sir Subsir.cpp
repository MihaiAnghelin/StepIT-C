//program pentru a cauta numarul de aparitii

#include <cstdio>
#include <cstdlib>
#include <cstring>

#define N 100

int functie(const char* sir, const char* subsir)
{
    int l1 = strlen(sir);
    int l2 = strlen(subsir);
    int contor = 0;
    for (int i = 0; i <= l1 - l2 + 1; i++)
    {
        int j = 0;
        int i2 = i;
        while (sir[i2] == subsir[j] && i2 < l1)
        {
            i2++;
            j++;
        }
        if (j == l2)
            contor++;
    }

    return contor;
}

int main()
{
    char a[N], b[N];
    printf("Introduceti sirul de caractere: ");
    fgets(a, sizeof(a), stdin);
    a[strlen(a) - 1] = '\0';
    printf("Introduceti subsirul: ");
    fgets(b, sizeof(b), stdin);
    b[strlen(b) - 1] = '\0';
    int nr = functie(a, b);
    printf("Numarul de aparitii este: %d \n", nr);



    system("pause");
    return 0;
}