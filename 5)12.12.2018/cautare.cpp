//acest program cauta un element intr-un vector
#include <cstdlib>
#include <cstdio>

int main()
{
    int a[] = { 5, 4, 3, 7, 9, 8, 9, 9, 4, 67 };
    int size = sizeof(a) / 4;
    for (int i = 0; i < size; i++)
    {
        if (a[i] == 8)
        {
            printf("Pozitia elementului cautat in vector este %d", i + 1);
            break;
        }
    }
    printf("\n%d\n", sizeof(short));

    system("pause");
    return 0;
}