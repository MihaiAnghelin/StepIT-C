//program pentru a genera permutarile primelor n elemente
#include<cstdio>
#include<cstring>

#define MAX 100	

char x[MAX]; //array that will store the values
char p[MAX]; //array that will store solutions

bool esteSel(char x, int j);

void afis()
{
	puts(p);
}

void perm(int j)
{
	if (j == strlen(x))
	{
		afis();
	}
	for (int i = 0; i < strlen(x); i++)
	{
		if ((esteSel(x[i], j) == true))
		{
			p[j] = x[i];
			perm(j + 1);
		}
	}
}

bool esteSel(char x, int j)
{
	for (int i = 0; i < j; i++)
		if (p[i] == x)
			return false;
	return true;
}


int main()
{
	int n;
	printf("Introduceti numarul: ");
	scanf_s("%d", &n);
	for (int i = 0; i <= n; i++)
	{
		if (i == n)
			x[i] = '\0';
		else
			x[i] = '1' + i;
	}
	perm(0);
	
	return 0;
}