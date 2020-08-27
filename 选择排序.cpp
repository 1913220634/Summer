#include <stdio.h>
void select(int a[10],int n)
{
	int i,j,temp,min;
	for(i=0;i<n;i++)
	{
        min=i;
		for(j=i+1;j<n;j++)//找出后面的除第一个元素外最小的数
		{
			if(a[j]<a[min])
			{
				min=j;
			}
		}

	   if(min!=i)//判断最小的数是否就是第一个数，不是则交换
	   {
		   temp=a[min];
		   a[min]=a[i];
		   a[i]=temp;
	   }
	}
}
int main()
{
	int i,a[10];
	printf("请输入十个整数:");
	for(i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
	}
	select(a,10);
	for(i=0;i<10;i++)
	{
		printf("%d",a[i]);
	}
	printf("\n");
	return 0;
}
