#include <stdio.h>
void insert(int a[],int n)
{
	int i,j,temp;
	for(i=1;i<n;i++)
	{
	  if(a[i]<a[i-1])
	  {
		temp=a[i];
	  
		for(j=i-1;a[j]>temp;j--)//从较小元素前一个开始的每个元素都与temp进行比较，比temp打则往后移，某个a[j]比temp小时退出循环
		{
			a[j+1]=a[j];
		}
		a[j+1]=temp;//一旦某个a[j]比temp小，将temp插入到这个a[j]后一个
	  }
	
	}
}
int main()
{
	int i,a[10];
	printf("请输入十个整数:");
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
