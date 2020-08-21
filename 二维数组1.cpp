#include <stdio.h>
int main()
{
	int i,j;
	int a[3][5],min,k=0,b=0;
	printf("请输入15个整数:");
	for(i=0;i<3;i++)
	{
		for(j=0;j<5;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	min=a[0][0];
	for(i=0;i<3;i++)
	{
		for(j=0;j<5;j++)
		{
			if(a[i][j]<min)
			{
				min=a[i][j];
			k=i;
			b=j;
			}
		}
	}
	printf("min=%d,i=%d,j=%d\n",min,k,b);
	return 0;
}
