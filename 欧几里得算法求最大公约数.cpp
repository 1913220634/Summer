#include <stdio.h>
int main()
{
	int m,n,t=0,k,flag=0;
	printf("����������������:");
	scanf("%d%d",&m,&n);
	if(n>m)
	{
		t=n;
		n=m;
		m=t;
	}
	if(m%n==0)
		printf("���������������Լ����:%d\n",n);
	
	while(m%n!=0)
	{
		k=m%n;
		m=n;
		n=k;
		flag=1;
	}
	if(m%n==0&&flag==1)
	printf("���������������Լ����:%d\n",k);
	return 0;
}




