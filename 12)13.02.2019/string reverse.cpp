// implementare strrev

#include <cstdlib>
#include <cstdio>
#include <cstring>

#define N 100

typedef char string[N];

void swap(char &a, char &b)
{
    a = a + b;
    b = a - b;
    a = a - b;
}

void reverse(char *str)
{
    for (int i = 0; i < strlen(str) / 2; i++)
    {
        swap(str[i], str[strlen(str) - 1 - i]);
    }
}

int main()
{
    string str;
    printf("Sirul este: ");
    fgets(str, sizeof(str), stdin);
    str[strlen(str) - 1] = '\0';
    reverse(str);
    printf("Sirul inversat este: ");
    puts(str);
    system("pause");
    return 0;
}