//program pentru a testa operatorul sizeof
#include<cstdio>

int main()
{
	__int32 array[] = { 1,34,23,135,123,2,34,6,2,4,3,62,3,5,234,6,2,532,564,64,31,67,4,64,7,45,77,65,4,456,75,4,3,4,6,234,35,6,4,3,6,4,5,6,4,
					1,3,4,1,421,42,657,43,2,4,0 };
	int total = 0;
	for (int i = 0; i < sizeof(array) / sizeof(array[0]); i++)
	{
		total += array[i];
	}
	float avarage = (float)total / (sizeof(array) / sizeof(array[0]));
	printf("Totalul este %d\nMedia este  %f\nNumarul de elemente este %d\n", total, avarage, (sizeof(array) / sizeof(array[0])));
	return 0;
}