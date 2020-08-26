#include <stdio.h>
void hanoi(int n,char x,char y,char z);
void hanoi(int n,char x,char y,char z)
{
	if(n==1)
	{
		printf("%c-->%c\n",x,z);//如果x上只有一个盘，直接移动到z即可
	}
	else
	{
		hanoi(n-1,x,z,y);//将x上的n-1个盘子借助z移动到y（标记1）
		printf("%c-->%c\n",x,z);//在上一条语句的基础上，将x上的第n个盘子移动到z
		hanoi(n-1,y,x,z);/*在上面语句的基础上，将y上的n-1个盘子借助x移动到z，这里y,x,z重新赋给形参x,y,z,那么（标记1）
						 处的x变成Y，z还是z，y变成x,继续下一条语句，则是从y到z,每次进入hanoi函数的目的都是把非z上的最大底盘移动到z*/
	}
}
int main()
{
	int n;
	printf("请输入汉诺塔的层数:");
	scanf("%d",&n);
	hanoi(n,'x','y','z');
	return 0;
}
