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
	printf("������һ������:");
	scanf("%d",&number);
	printf("쳲���������ǰ%d��������:",number);
	for(i=1;i<=number;i++)
	{
		printf("%d  ",fabo(i));
	}
	printf("\n");
	return 0;
}
