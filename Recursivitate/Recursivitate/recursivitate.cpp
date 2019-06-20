//exemplu simplu de recursivitate

#include <cstdlib>
#include <cstdio>

void functie_recursiva(int i)
{
	if (i == 100)
		return;
	int a[20];
	printf("Apel %d\n", i);
	functie_recursiva(i + 1);
	printf("Intoarcere din apel %d\n", i);
}

int main()
{
	functie_recursiva(1);

	system("pause");
	return 0;
}