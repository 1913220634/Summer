#include <stdio.h>
int main()
{
	int i,j;
	double a[10],b;
	printf("请输入十个数:");
	for(i=0;i<10;i++)
	{
		scanf("%lf",&a[i]);
	}
	for(i=1;i<10;i++)
	{
		for(j=0;j<10-i;j++)
		
		{
			if(a[j]<a[j+1])
		{
			b=a[j];
			a[j]=a[j+1];
			a[j+1]=b;
		}
		}
	}
  for(i=0;i<10;i++)
	  printf("%lf\n",a[i]);
  return 0;
  }

	