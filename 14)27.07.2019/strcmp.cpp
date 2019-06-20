//program pentru scriere strcmp
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define N 100

int mstrcmp(const char* a, const char* b)
{
    if (a == NULL)
        if (b == NULL)
            return 0;
        else
            return -1;
    if (b == NULL)
        return -1;
    int i = 0;
    while (a[i] == b[i] && i < strlen(a) && i < strlen(b))
        i++;
    if (i == strlen(a))
    {
        if (i == strlen(b))
            return 0;
        else
            return -1;
    }
    if (i == strlen(b))
    {
        return 1;
    }

    if (a[i] - b[i] < 0)
        return -1;
    else
        return 1;

}

int main()
{
    char a[N], b[N];
    printf("Primul sir este: ");
    fgets(a, sizeof(a), stdin);
    a[strlen(a) - 1] = '\0';
    printf("Al doilea sir este: ");
    fgets(b, sizeof(b), stdin);
    b[strlen(b) - 1] = '\0';


    int nr = mstrcmp(a, b);
    if (nr == 0)
        printf("Cele doua siruri identice\n");
    else if (nr < 0)
        printf("Sunt in ordine lexicografica \n");
    else if (nr > 0)
        printf("Nu sunt in ordine lexicografica \n");
    system("pause");
    return 0;
}