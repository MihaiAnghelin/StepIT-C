//

#include<cstdlib>
#include<cstdio>

int main()
{
	int* ptr;
	int i, sum = 0;
	unsigned int n;
	
	printf("Enter number of elements: ");
	scanf_s("%d", &n);

	ptr = (int*)malloc(n * sizeof(int));

	if (ptr == NULL)
	{
		printf("Memory not allocated.\n");
	}
	else
	{
		printf("Memory succesfully allocated using malloc.\n");

		for (int i = 0; i < n; i++)
		{
			ptr[i] = i + 1;
		}

		printf("The elements of the array are: ");
		for (int i = 0; i < n; i++)
		{
			printf("%d, ", ptr[i]);
		}
		printf("\n");
		free(ptr);
	}

	system("pause");
	return 0;
}