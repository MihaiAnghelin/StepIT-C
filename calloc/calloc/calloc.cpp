//program exemplu calloc

#include<cstdio>
#include<cstdlib>

int main()
{
	int n;
	printf("Number of elements to be entered: ");
	scanf_s("%d", &n);

	int *a;
	a = (int*)calloc(n, sizeof(int));

	printf("Enter %d numbers:\n ", n);
	for (int i = 0; i < n; i++)
	{
		scanf_s("%d", &a[i]);
	}

	printf("The numbers entered are: ");
	for (int i = 0; i < n; i++)
	{
		printf("%d ", a[i]);
	}

	free(a);

	system("pause");
	return 0;
}