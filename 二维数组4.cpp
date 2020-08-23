#include <stdio.h>
int main()
{
	char a[3][3];
	int i,j;
	printf("ÇëÊäÈë9¸ö×Ö·û:");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			a[i][j]=getchar();
		}
	}
    for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%c",a[i][j]);
		}
		printf("\n");
	}
	return 0;
}

