#include <stdio.h>
int main()
{
	int i,j��flag=1;
	double a[10],b;
	printf("������ʮ����:");
	for(i=0;i<10;i++)
	{
		scanf("%lf",&a[i]);
	}
	for(i=1;i<10&&flag;i++)
	{
		for(j=0;j<10-i;j++)
		
		{
			flag=0
			if(a[j]<a[j+1])
		{
			b=a[j];
			a[j]=a[j+1];
			a[j+1]=b;
			flag=1;//��û�з����ƶ���˵�������Ѿ���ɣ�������if�µ���䣬��ǰ�˳�ѭ��
		}
		}
	}
  for(i=0;i<10;i++)
	  printf("%lf\n",a[i]);
  return 0;
  }

	