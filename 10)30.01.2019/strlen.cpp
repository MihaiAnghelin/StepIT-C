//program care calculeaza lungimea unui sir de caractere
#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>
#include <cstdlib>

#define N 30

int stringLength(const char* str)
{
    int i = 0;
    while (*str != '\0')
    {
        i++;
        str++;
    }
    return i;
}

int main()
{
    char a[N];
    char b[N];
    printf("Introduceti sirul de caractere, maxim %d caractere \n",N);
    //fgets(a, N, stdin);
    scanf("%[^\n]s", a);
    
    int r = 500 + 955;
    int lenght = stringLength(a);
    printf("Lungimea sirului este %d\n", lenght);
    puts(a);
    puts(b);

    system("pause");
    return 0;
}