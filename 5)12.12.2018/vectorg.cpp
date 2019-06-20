//program care calculeaza suma primelor n numere naturale folosind vectori
#include <cstdlib>
#include <cstdio>

#define N 100

int main()
{
    int a[N];
    /*for (int i = 0; i < N; i++)
        a[i] = i + 1;
    for (int i = 0; i < N; i++)
    {
        if (a[i] % 2 == 0)
            continue;
        printf("%d ", a[i]);
    }*/

    for (int *p = a; p < a + N; p++)
    {
        *p = p - a + 1;
    }
    for (int *p = a; p < a + N; p++)
    {
        if (*p % 2 == 0)
            continue;
        printf("%d ", *p);
    }
    system("pause");
    return 0;
}