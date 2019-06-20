//exemplu de program simplu cu indirectare multipla

#include <cstdio>
#include <cstdlib>

int main()
{
	int x = 10;
	int *q;
	int **p;
	q = &x;
	p = &q;
	printf("%d\n", **p);

	system("pause");
	return 0;
}