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
		printf("反向输出:");
	}
	putchar(ch);
}
int main()
{
	printf("请输入以感叹号结尾的英文句子:");
	print();
	putchar('\n');
	return 0;
}
