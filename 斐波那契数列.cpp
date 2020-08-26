#include <stdio.h>
int fabo(int);
int fabo(int n)
{
	if(n==1||n==2)
	{
		return 1;
	}
	else
	{
		return fabo(n-1)+fabo(n-2);
	}
}
int main()
{
	int i,number;
	printf("请输入一个整数:");
	scanf("%d",&number);
	printf("斐波那契数列前%d个数字是:",number);
	for(i=1;i<=number;i++)
	{
		printf("%d  ",fabo(i));
	}
	printf("\n");
	return 0;
}
