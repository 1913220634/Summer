#include <stdio.h>
int main()
{
	int i,n,k,flag=0;
	int a[10]={0,10,20,30,40,50,60,70,80,90};
	printf("请输入一个整数:");
	scanf("%d",&n);
	for(i=0;i<10;i++)
	{
		if(a[i]==n)
		{
			k=i;
			flag=1;
		}
	}
    for(i=k;i>=k&&i<10;i++)
			{
				a[i]=a[i+1];
				
			}
	if(flag==0)
	{
		printf("-1");
	}
	else
	{
		for(i=0;i<9;i++)
			printf("%d  ",a[i]);
	}
	return 0;
}

