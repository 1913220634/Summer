#include <stdio.h>
void select(int a[10],int n)
{
	int i,j,temp,min;
	for(i=0;i<n;i++)
	{
        min=i;
		for(j=i+1;j<n;j++)//�ҳ�����ĳ���һ��Ԫ������С����
		{
			if(a[j]<a[min])
			{
				min=j;
			}
		}

	   if(min!=i)//�ж���С�����Ƿ���ǵ�һ�����������򽻻�
	   {
		   temp=a[min];
		   a[min]=a[i];
		   a[i]=temp;
	   }
	}
}
int main()
{
	int i,a[10];
	printf("������ʮ������:");
	for(i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
	}
	select(a,10);
	for(i=0;i<10;i++)
	{
		printf("%d",a[i]);
	}
	printf("\n");
	return 0;
}
