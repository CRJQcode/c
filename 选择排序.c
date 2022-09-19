/*选择排序,升序*/
#include<stdio.h>
int main()
{
	int i, j, t, k = 0;
	int a[10]={0};
	for (i = 0; i < 10; i++)		//循环，给num数组赋值
	{
		printf("a[%d]=", i);
		scanf_s("%d", &a[i]);
	}
	for (i = 0; i < 9; i++)		//循环嵌套，进行比较选择
	{
		for (j = i; j < 10; j++)
		{
			if (a[k] >= a[j]) k = j;
		}
		t = a[i];
		a[i] = a[k];
		a[k] = t; 
	}
	for (i = 0; i < 10; i++)
	{
		printf("%2d", a[i]);
	}
	return 0;
}