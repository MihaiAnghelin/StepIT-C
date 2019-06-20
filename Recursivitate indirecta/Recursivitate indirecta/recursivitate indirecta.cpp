//exemplu de utilizare a recursivitatii indirecte

#include<cstdlib>
#include<cstdio>

void f1(int i);

void f2(char c, int i)
{
	if (c == 'z')
	{
		return;
	}
	printf("f2: %c %d\n", c, i);
	f1(i + 1);
}

void f1(int i)
{
	if (i == 100)
		return;
	printf("f1: %c %d\n", 'a' - 1 + i, i);
	f2('a' - 1 + i, i);
}

int main()
{
	f1(0);


	system("pause");
	return 0;
}