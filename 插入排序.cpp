#include <stdio.h>
void insert(int a[],int n)
{
	int i,j,temp;
	for(i=1;i<n;i++)
	{
	  if(a[i]<a[i-1])
	  {
		temp=a[i];
	  
		for(j=i-1;a[j]>temp;j--)//�ӽ�СԪ��ǰһ����ʼ��ÿ��Ԫ�ض���temp���бȽϣ���temp���������ƣ�ĳ��a[j]��tempСʱ�˳�ѭ��
		{
			a[j+1]=a[j];
		}
		a[j+1]=temp;//һ��ĳ��a[j]��tempС����temp���뵽���a[j]��һ��
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
	insert(a,10);
	for(i=0;i<10;i++)
	{
		printf("%d",a[i]);
	}
	printf("\n");
	return 0;
}
