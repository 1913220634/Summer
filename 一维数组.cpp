#include <stdio.h>
int main()
{   int a[12]={1,2,3,4,5,6,7,8,9,10,11,12};
    int i,year;
	printf("���������: ");
	scanf("%d",&year);
	for(i=0;i<12;i++)
	{ 
		if(i==0||i==2||i==4||i==6||i==7||i==9||i==11)
		{printf("%d�·�:  31��\n",i+1);}
		else if(i==3||i==5||i==8||i==10)
		{printf("%d�·�:  30��\n",i+1);}
		else if(i==1)
		{
			if(year%4==0&&year%100!=0||year%400==0)
			{printf("%d�·�: 29��\n",i+1);}
			else
			{printf("%d�·�: 28��\n",i+1);}
		}
	}
	return 0;
}