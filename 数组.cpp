#include <stdio.h>
int main()
{
	int i,k;
    int a[10],min;
	printf("请输入十个整数:");
	for(i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
	}
	   min=a[0];
	 
	for(i=1;i<10;i++)
	{		 
		if(a[i]<min)
			
		{
			min=a[i];
			k=i;

		}
	}

	printf("min=%d,k=%d\n",min,k);
	
		
		
	

			
		return 0;
}

