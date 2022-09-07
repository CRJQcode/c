#include<stdio.h>
int main()
{
	int n, i, sum=0;
	scanf_s("%d", &n);
	int	num[n];
	for (i = 0; i <= n; i++);
	{
		scanf_s("%d", &num[i]);
		if (num[i] % 2 == 0)
			sum = sum + num[i];
	}
		printf("%d", sum);
		return 0;
}