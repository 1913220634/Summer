#include <stdio.h>
int main()
{
	int i,j，flag=1;
	double a[10],b;
	printf("请输入十个数:");
	for(i=0;i<10;i++)
	{
		scanf("%lf",&a[i]);
	}
	for(i=1;i<10&&flag;i++)
	{
		for(j=0;j<10-i;j++)
		
		{
			flag=0
			if(a[j]<a[j+1])
		{
			b=a[j];
			a[j]=a[j+1];
			a[j+1]=b;
			flag=1;//当没有发生移动，说明排序已经完成，不进入if下的语句，提前退出循环
		}
		}
	}
  for(i=0;i<10;i++)
	  printf("%lf\n",a[i]);
  return 0;
  }

	