#include<stdio.h>
int main()
{
	int i;
	char c[5] = { 'C','h','i','n','a'};
	for (i = 0; i < 5; i++)
	{
		c[i] = c[i] + 4;
		printf("%c", c[i]);
	}
	return 0;
}