#include <stdio.h>
void print();
void print()
{
	int ch;
	if((ch=getchar())!='!')
	{
	    print();
	}
	else
	{
		printf("�������:");
	}
	putchar(ch);
}
int main()
{
	printf("�������Ը�̾�Ž�β��Ӣ�ľ���:");
	print();
	putchar('\n');
	return 0;
}
