//program cu stringuri
#define _CRT_SECURE_NO_WARNINGS

#include<cstdio>
#include<cstring>
#include<cstdlib>

int main()
{
#pragma region exemplul 2
    //const char *src = "123";
    //const char *des = "abc";
    //printf("\nThe src string is %c", src[0]);
    //printf("\nThe dest string is %c", des[0]);

    //des[0] = src[0];

    //printf("\nThe src string is %c", src[0]);
    //printf("\nThe dest string is %c", des[0]);
#pragma endregion

#pragma region exemplul 3
    //char name[20];
    //name = "Mihai";//eroare
#pragma endregion
   
#pragma region exemplul 4
    ////exmplul 4
    //char name[20];
    //strcpy(name, "Mihai");
    //printf("Numele meu este %s\n", name);
#pragma endregion

#pragma region exemplul 5
    //exemplul 5
    //char name[16];
    //char string2[40];
    //int length;

    //strcpy(name, "Mark");
    //strcpy(string2, "My name is ");
    //strcat(string2, name);
    //strcat(string2, "\n");

    //printf(string2);
    //length = strlen(string2);
    //printf("Lungimea sirului >>%s<< este %d caractere \n", string2, length);

#pragma endregion

#pragma region exemplul 6
    /*char name[16];
    char string2[40];
    int length;

    strcpy(name, "Mark");
    strcpy(string2, "My name is %s\n");

    printf(string2, name);*/
#pragma endregion

#pragma region exemplul 7
    int name[20];
    name[0] = 'M';
    name[1] = 'a';
    name[2] = 'r';
    name[3] = 'k';
    name[4] = '\0';
    printf("Numele meu este %s\n", name);
#pragma endregion


    
    system("pause");
    return 0;
}