#include <stdio.h>
int main()
{
	int i;
	double a[10],b;
	printf("������9����:");
	for(i=0;i<9;i++)
	{
		scanf("%lf",&a[i]);
	}

	for(i=0;i<4;i++)
	{	
		{

			b=a[i];
			a[i]=a[8-i];
			a[8-i]=b;
		}
	}

  for(i=0;i<9;i++)
	  printf("%lf\n",a[i]);
  return 0;
  }

