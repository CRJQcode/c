#include<stdio.h>
int main()
{
	int hours;
	float money;
	scanf_s("%d", &hours);
	if (hours <= 5)
		money = hours * 5;
	else if (hours >= 8)
		money = (hours - 8) * 25.4 + 167.5;
	else
		money = (hours - 5) * 22.5 + 100;
	printf("%.1f", money);
	return 0;
}