#include <stdio.h>

	double fact(double);
	double fact(double num)
	{
		double result; 
		if(num>0)
		{
			result=num*fact(num-1);
		}
		else
		{
			result=1;
		}
		return result;
	}

int main()
{
	double num;
	printf("������һ������:");
	scanf("%lf",&num);
	printf("%.2lf�Ľ׳���%.2lf\n",num,fact(num));
	return 0;
}