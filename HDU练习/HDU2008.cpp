#include <stdio.h>
/*
统计给定的n个数中，负数、零和正数的个数,n为0时结束
注意：输入的数可能为小数
*/
int main()
{
	int t;
	while(scanf("%d",&t)!=EOF)
	{
		if(t == 0)
			break;
		float a;
		int sum1=0,sum2=0,sum3=0;
	while(t--)
	{
		scanf("%f",&a);
		if(a < 0)
		{
			sum1++;
		}
		else if(a == 0)
		{
			sum2++;
		}
		else
		{
			sum3++;
		}
	}
		printf("%d %d %d\n",sum1,sum2,sum3);
	}
	return 0;
}