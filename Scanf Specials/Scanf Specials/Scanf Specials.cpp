#define _CRT_SECURE_NO_WARNINGS
 
#include<cstdlib>
#include<cstdio>
#include<string.h>
 
int main()
{
    char string[30];
    scanf("%4c", &string[0]);
    printf("The characters you entered  were %c%c%c%c\n",
        string[0], string[1], string[2], string[3]);
 
    system("PAUSE");
    return 0;
}