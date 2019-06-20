//Program de afisare a cidului ascii

#include<cstdlib>
#include<cstdio>

int main()
{
    for (int i = 0; i < 256; i++)
    {
        printf("%d\t%c\n", i, i);
    }
    system("PAUSE");
    return 0;
}