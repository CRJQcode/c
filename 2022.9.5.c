#include<stdio.h>
int main()
{
	char c1,c2;
	int asc;
	scanf_s("%c",&c1);
	asc = 'a'-'A';
	c2 = c1 - asc;
	printf("%c",c2);
	return 0;
}