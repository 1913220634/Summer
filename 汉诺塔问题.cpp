#include <stdio.h>
void hanoi(int n,char x,char y,char z);
void hanoi(int n,char x,char y,char z)
{
	if(n==1)
	{
		printf("%c-->%c\n",x,z);//���x��ֻ��һ���̣�ֱ���ƶ���z����
	}
	else
	{
		hanoi(n-1,x,z,y);//��x�ϵ�n-1�����ӽ���z�ƶ���y�����1��
		printf("%c-->%c\n",x,z);//����һ�����Ļ����ϣ���x�ϵĵ�n�������ƶ���z
		hanoi(n-1,y,x,z);/*���������Ļ����ϣ���y�ϵ�n-1�����ӽ���x�ƶ���z������y,x,z���¸����β�x,y,z,��ô�����1��
						 ����x���Y��z����z��y���x,������һ����䣬���Ǵ�y��z,ÿ�ν���hanoi������Ŀ�Ķ��ǰѷ�z�ϵ��������ƶ���z*/
	}
}
int main()
{
	int n;
	printf("�����뺺ŵ���Ĳ���:");
	scanf("%d",&n);
	hanoi(n,'x','y','z');
	return 0;
}
