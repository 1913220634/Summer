#include <stdio.h>
int main()
{
	int i=0,j=0;
	int a[3][3],b=0;
	printf("请输入九个整数:");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
   	for(i=0;i<3;i++)
	{
		b=b+a[i][i];
	}
	printf("%d\n",b);
	return 0;
}
	
	