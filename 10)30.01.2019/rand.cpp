//program pentru a verifica daca un numar dat de la tastatura 
//este sau nu prim
#include<cstdio>
#include<cstdlib>
#include<ctime>

int main()
{
    time_t t1;
    t1 = time(NULL);

  //  system("pause");
    for (int j = 3; j <= 20000; j++)
    {
        bool prim = true;
        for (int i = 2; i < j; i++)
            if (j % i == 0)
            {
                prim = false;
                break;
            }
        if (prim)
            printf("%d\n",j);
    }
    time_t t2;
    t2 = time(NULL);
    
    printf("t1 = %ld  \n t2 = %ld  \n  t = t2 - t1 = %ld  \n", t1, t2, t2 - t1);

    system("PAUSE");
    return 0;
}