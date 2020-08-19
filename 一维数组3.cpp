#include <stdio.h>
int main()
{ int i,b,flag=0;
  int a[4]={1,2,3,4};
  printf("请输入一个整数:");
  scanf("%d",&b);
  for(i=0;i<4;i++)
  {   
	  if(a[i]==b)
	  {printf("%d\n",i);
	  flag=flag+1;

	  }
	  
  }
  if(flag==0)
  {printf("-1\n");}
return 0;
}
