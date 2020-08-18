#include <stdio.h>
int main()
{   
	char a='F';
    int f=123;
	char *pa=&a;
	int *pb=&f;
	printf("a=%c\n",*pa);
    printf("f=%d\n",*pb);//以上是通过变量a和变量f对变量的值进行访问（直接访问）

	*pa='C';
	*pb+=1;//以上两行对变量a和变量f进行改值，此时是通过指针间接进行的一个访问（间接访问）
    printf("now,a=%c\n",*pa);
    printf("now,f=%d\n",*pb);

    printf("sizeof pa=%d\n",sizeof(pa));

    printf("sizeof pb=%d\n",sizeof(pb));//以上两行验证指针（一个地址）占四个字节的空间（在别的编译系统可能是占8个字节）


	return 0;

}