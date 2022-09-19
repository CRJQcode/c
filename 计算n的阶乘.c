/*¼ÆËãnµÄ½×³Ë*/
#include<stdio.h>
long jc(long a)
{
	if (a == 0) return(1);
		return(jc(a - 1) * a);
}
int main()
{
	int n;
	scanf_s("%d", &n);
	printf("%d!=%d",n ,jc(n));
	return 0;
}