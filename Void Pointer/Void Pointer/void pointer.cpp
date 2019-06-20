//program care ilustreaza utilizarea unui pointer void
#include<cstdlib>
#include<cstdio>

int main()
{
	void *p;
	int a = 5;
	p = &a;
	*(int*)p = 10;
	printf("%d\n", a);

	system("PAUSE");
}