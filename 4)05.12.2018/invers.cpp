//acest program face rasturnatul unui numar natural

#include <cstdio>
#include <cstdlib>

void invers(int &a)
{
    int c, nou = 0;
    while (a)
    {
        c = a % 10;
        a /= 10;
        nou = nou * 10 + c;
    }
    a = nou;
}

int main()
{
    int nr;
    printf("Introduceti un numar: ");
    scanf_s("%d", &nr);

    invers(nr);
    printf("Rasturnatul sau este %d\n", nr);
    system("PAUSE");
}