#include<stdio.h>
int main()
{
	int a,num,sum = 0;	//numΪ��������֣�sumΪż���ĺ�
	scanf_s("%d", &num);	
	while (num != 0)    //��num����0ʱ��ֹͣѭ��
	{
		a = num % 10;	//ѭ��ȡ��numÿһλ������������a
		num = num / 10;
		if (a % 2 == 0)
			sum = sum + a;
	}
	printf("%d", sum);
	return 0;
}