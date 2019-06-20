//FizzBuzz. Afiseaza pt numere de la 1 la 100. Afis pt i%3==0, Fizz, pt i%5==0, Buzz, pt i%15==0, FizzBuzz

#include <cstdio>
#include <cstdlib>

int main()
{
    for (int i = 1; i <= 100; i++)
    {
        if (i % 15 == 0) 
            printf("FizzBuzz\n");
        else if (i % 5 == 0) 
            printf("Buzz\n");
        else if (i % 3 == 0)
            printf("Fizz\n");
        else 
            printf("%d\n", i);
    }
    system("pause");
    return 0;
}