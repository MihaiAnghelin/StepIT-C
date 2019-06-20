//program care numara de cate ori apare fiecare cifra intr-un vector de intregi

#include <cstdio>
#include <cstdlib>
#include <conio.h>

#define N 100
#define FOR_N for (int i = 0; i < n; i++)

int main()
{
    int n, v[N], i = 0;
    char c;
    while ((c = _getch()) != '\r') //carrige return
    {
        _putch(c);
        v[i++] = c - '0';
    }
    n = i;
    printf("\n");
    int sol[10] = { 0 };
    for (int i = 0; i < n; i++)
        sol[v[i]]++;
    for (int i = 0; i < 10; i++)
        printf("%d apare de %d ori\n", i, sol[i]);

    system("PAUSE");
    return 0;
}