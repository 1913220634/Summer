#include <stdio.h>
int main()
{
	int i,j;
	int a[3][5],min=0;
	printf("������ʮ�������:");
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
		printf("��%d����Сֵ��%d\n",j+1,min);
	}
	return 0;
}

