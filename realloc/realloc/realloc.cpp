// program pentru exemplificare realloc in mod corect

#include<cstdlib>
#include<cstdio>

int main()
{
	int *ptr = (int *)malloc(sizeof(int) * 2);
	int *ptr_new;

	*ptr = 10;
	*(ptr + 1) = 20;

	//ptr_new = (int *)realloc(ptr, sizeof(int) * 3); ptr ex 3
	//*(ptr_new + 2) = 30;
	ptr = (int *)realloc(ptr, sizeof(int) * 3);
	*(ptr + 2) = 30;
	for (int i = 0; i < 3; i++)
	{
		//printf("%d ", *(ptr_new + i));
		printf("%d ", *(ptr + i));
	}
	free(ptr);

	system("pause");
	return 0;
}