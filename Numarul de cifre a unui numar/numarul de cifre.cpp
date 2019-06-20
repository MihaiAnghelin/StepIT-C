//Acest program afiseaza numarul de cifre ale unui numar intreg

#include <cstdio>
#include <cstdlib>

int main()
{
	int numar;
	printf("Introduceti numarul: ");
	scanf_s("%d", &numar);
	int cifre = 0;
	if (numar != 0)
		while (numar)
		{
			cifre++;
			numar /= 10;
		}
	else
		cifre++;
	printf("Numarul de cifre este %d\n", cifre);
	system("pause");
	return 0;
}