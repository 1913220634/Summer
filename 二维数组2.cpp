#include <stdio.h>
int main()
{
	int i,j;
	int a[3][5],min=0;
	printf("请输入十五个整数:");
	for(i=0;i<3;i++)
	{
		for(j=0;j<5;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	for(j=0;j<5;j++)
	{
		min=a[0][j];
		for(i=0;i<3;i++)
		{
			{if(min>a[i][j])
				min=a[i][j];
			
			}
		}
		printf("第%d列最小值是%d\n",j+1,min);
	}
	return 0;
}

