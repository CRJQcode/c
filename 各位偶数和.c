#include<stdio.h>
int main()
{
	int a,num,sum = 0;	//num为输入的数字，sum为偶数的和
	scanf_s("%d", &num);	
	while (num != 0)    //当num等于0时，停止循环
	{
		a = num % 10;	//循环取出num每一位的数，保存在a
		num = num / 10;
		if (a % 2 == 0)
			sum = sum + a;
	}
	printf("%d", sum);
	return 0;
}