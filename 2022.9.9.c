#include<stdio.h>
int main()
{
	int a, b, s, d;
	scanf_s("%d %d", &a,&b);
	s = a + b;
	d = a - b;
	printf("The sum is %d\n", s);
	printf("The difference is %d", d);
	return 0;
}