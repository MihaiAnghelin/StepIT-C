//acest program este demo pt switch

#include <cstdio>
#include <cstdlib>
#include <conio.h>

int main()
{
    char litera = 1;
    while (litera);
    {
        printf("Dati o litera ");
        //scanf_s(" %c", &litera);
        litera = _getch(); //functie POSIX
        printf("%c", litera);
        switch (litera)
        {
        case 'A':
        case 'a':
            printf("Ati apasat a\n");
            break;
        case 'B':
        case 'b':
            printf("Ati apasat b\n");
            break;
        case 'C':
            printf("Ati apasat C\n");
        case 'c':
            printf("Ati apasat c\n");
            break;
        case 'D':
        case 'd':
            printf("Ati apasat d\n");
            break;
        default:
            printf("Ati apasat alta tasta\n");
        }
    }
    system("PAUSE");
    return 0;
}