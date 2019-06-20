//Program care afiseaza maximul de pe fiecare rand al unei mateice citite de la tastatura

#define _CRT_SECURE_NO_WARNINGS

#include <stdlib.h>
#include <stdio.h>

#define N 20

int main()
{
	int a[N][N];
	int lin, col; //nr linii si nr coloane

	printf("Numarul de linii al matricei: ");
	scanf("%d", &lin);
	printf("Numarul de coloane al matricei: ");
	scanf("%d", &col);
	
	//citeste matricea
	for (int i = 0; i < lin; i++)
	{
		for (int j = 0; j < col; j++)
		{
			printf("a[%d][%d] = ", i, j);
			scanf("%d", &a[i][j]);
		}
	}

	//calculeaza si afiseaza maximul pe fiecare linie
	for (int i = 0; i < lin; i++)
	{
		int max = a[i][0];
		for (int  j = 0; j < col; j++)
		{
			if (a[i][j] > max)
				max = a[i][j];
		}
		printf("Elementul maxim pe linia %d este %d.\n", i, max);
	}

	system("pause");
	return 0;
}