#include <stdio.h>
int main()
{
	int i;
	double a[10],b;
	printf("请输入十个数:");
	for(i=0;i<10;i++)
	{
		scanf("%lf",&a[i]);
	}
	
	for(i=0;i<5;i++)
	{	
		{
		
			b=a[i];
			a[i]=a[9-i];
			a[9-i]=b;
		}
	}
	
  for(i=0;i<10;i++)
	  printf("%lf\n",a[i]);
  return 0;
  }

	