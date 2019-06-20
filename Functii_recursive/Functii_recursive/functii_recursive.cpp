//program recursivitate
#include<cstdio>

int sum(unsigned int n)
{
	if (n == 0)
		return 0;
	return(n + sum(n - 1));
}

int factorial(unsigned int n)
{
	if (n == 0 || n == 1)
		return 1;
	else
		return n * factorial(n - 1);
}

int fibonacci(unsigned int n)
{
	if (n == 1)
		return 1;
	if (n == 2)
		return 2;
	return fibonacci(n - 1) + fibonacci(n - 2);
}


int main()
{
	printf("Suma primelor 100 de numere = %d\n", sum(100));
	printf("10! = %d\n", factorial(10));
	printf("fibonacci(10) = %d", fibonacci(10));

	return 0;
}