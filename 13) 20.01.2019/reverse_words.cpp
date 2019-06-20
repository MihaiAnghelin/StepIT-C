//Given a string containing a set of words separated by whitespace, we would like to transform it to a string
//in which the words appear in the reverse order.
// For example, "Alice likes Bob" transforms to "Bob likes Alice". We do not need to keep the original string.

//does not include '.' character.

#include<cstdlib>
#include<cstdio>
#include<string.h>
#include<cctype>

//define max size of the large sentence given from keyboard
#define N 300

void inversare(char input[])
{

    char sol[N];
    int tokenLength = 0;
    int sol_index = 0;
    bool schimbare = true;
    bool arePunct = false;
    bool areExclam = false;
    bool areQ = false;

    while (isspace(input[strlen(input) - 1]))
        input[strlen(input) - 1] = '\0';
    if (input[strlen(input) - 1] == '.')
    {
        arePunct = true;
        input[strlen(input) - 1] = '\0';
    }
    if (input[strlen(input) - 1] == '!')
    {
        areExclam = true;
        input[strlen(input) - 1] = '\0';
    }
    if (input[strlen(input) - 1] == '?')
    {
        areQ = true;
        input[strlen(input) - 1] = '\0';
    }
    while (isspace(input[strlen(input) - 1]))
        input[strlen(input) - 1] = '\0';


    while (schimbare == true)
    {
        schimbare = false;
        for (int i = strlen(input) - 1; i >= 0; i--)
        {
            if (input[i] != ' ')
                tokenLength++;
            else
            {
                for (int j = 0; j < tokenLength; j++)
                    sol[sol_index++] = input[strlen(input) - tokenLength + j];

                sol[sol_index++] = ' ';
                sol[sol_index] = '\0';//keep it as a proper string

                                         //shorten the big string 
                                         //so the strlen function will still work 
                input[strlen(input) - tokenLength - 1] = '\0';
                //repeat for the new strlen
                tokenLength = 0;
                schimbare = true;
                printf("newsol la prima adaugare este %s\n", sol);
                break;


            }
        }
    }
    //if for ends and there is the last first word
    if (tokenLength > 0)
    {
        for (int j = 0; j < tokenLength; j++)
            sol[sol_index++] = input[strlen(input) - tokenLength + j];

       
    }

    if (arePunct == true)
        sol[sol_index++] = '.';
    if (areExclam == true)
        sol[sol_index++] = '!';
    if (areQ == true)
        sol[sol_index++] = '?';

    sol[sol_index] = '\0';//keep it as a proper string

    printf("%s\n", sol);
}

int main()
{
    char input[N];
    printf("Please input the words (sentence):\n");
    scanf_s("%[^\n]", input, 300);
    //printf("%d", sizeof(solution));
    inversare(input);
    printf("\n");
    printf("\n a mai ramas %s\n", input);
    //puts(solution);

    system("PAUSE");
    return 0;
}