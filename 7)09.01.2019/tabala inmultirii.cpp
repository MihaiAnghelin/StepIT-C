//afisare tabla inmultirii
#include <cstdlib>
#include<cstdio>

int main()
{
    for (int i = 1; i < 10; i++)
    {
        for (int j = 1; j < 10; j++)
        {
            printf("%2d ", i * j);
        }
        printf("\n");
    }
    system("pause");
    return 0;
}