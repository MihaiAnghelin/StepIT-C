//program care rezolva ecuatia 3x + y + 4xz
#include<cstdlib>
#include<cstdio>

int main()
{
	int i = 1;
	for (int y = 0; y <= 100; y++)
		for (int x = 0; x < 34; x++)
			for (int z = 0; z < 25; z++)
				if (3 * x + y + 4 * x * z == 100)
					printf("set variabile %d:\n{\n\tx = %d,\n\ty = %d,\n\tz = %d\n}\n\n",i++,x,y,z);

	system("pause");
	return 0;
}