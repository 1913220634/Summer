#include <stdio.h>
int main()
{   
	char a='F';
    int f=123;
	char *pa=&a;
	int *pb=&f;
	printf("a=%c\n",*pa);
    printf("f=%d\n",*pb);//������ͨ������a�ͱ���f�Ա�����ֵ���з��ʣ�ֱ�ӷ��ʣ�

	*pa='C';
	*pb+=1;//�������жԱ���a�ͱ���f���и�ֵ����ʱ��ͨ��ָ���ӽ��е�һ�����ʣ���ӷ��ʣ�
    printf("now,a=%c\n",*pa);
    printf("now,f=%d\n",*pb);

    printf("sizeof pa=%d\n",sizeof(pa));

    printf("sizeof pb=%d\n",sizeof(pb));//����������ָ֤�루һ����ַ��ռ�ĸ��ֽڵĿռ䣨�ڱ�ı���ϵͳ������ռ8���ֽڣ�


	return 0;

}