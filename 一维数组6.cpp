#include <stdio.h>
int main()
{   int i,a[10],x,k=11;
	printf("������ʮ������:");
		for(i=0;i<10;i++)
		{ 
			scanf("%d",&a[i]);
		}
	printf("������һ������:");
    scanf("%d",&x);
	for(i=0;i<10;i++)
	{
		if(a[i]==x)
		{
			k=i;
			printf("%d\n",k);
		}
	}
	if(k==11)
		printf("-1\n");
	return 0;
}
