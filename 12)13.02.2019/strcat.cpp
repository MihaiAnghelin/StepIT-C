// implementare strcat

#include <cstdio>
#include <cstdlib>
#include <cstring>

#define N 20

void mstrcat(char *dest, const  char* source)
{
    int j = 0;

    int lungDest = strlen(dest);
    int lungSource = strlen(source);
    for (int i = lungDest; i < lungDest + lungSource; i++)
    {
        dest[i] = source[j];
        j++;
    }
    dest[lungDest + lungSource] = '\0';
}


int main()
{
    char a[N], b[N];
    printf("Primul sir este : ");
    fgets(a, sizeof(a), stdin);
    a[strlen(a) - 1] = '\0';
    printf("Al doilea sir este : ");
    fgets(b, sizeof(b), stdin);
    b[strlen(b) - 1] = '\0';

    mstrcat(a, b);
    printf("a + b = ");
    puts(a);

    system("PAUSE");
    return 0;
}