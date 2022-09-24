#include<stdio.h>
int cir(int n)
{
	int p = 0;
	int i;
	for (i = 2; i <= n; i++)
	{
		p = (p + 3) % i;
	}
	return p + 1;
}
int main()
{
	int n;
	scanf_s("%d", &n);
	printf("%d", cir(n));
	return 0;
}