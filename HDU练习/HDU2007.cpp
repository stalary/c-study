#include <stdio.h>
/*
 输入m，n
 计算其中的数字段，分别求偶数平方的和，奇数立方的和
 注意：输入时不知道m，n的谁大谁小，需要先进行比较，否则可能进入死循环
 */
int main()
{
	int m,n,i;
	while(scanf("%d%d",&m,&n)!=EOF)
	{
		int t;
		if(m > n)
		{
			t = m;
			m = n;
			n = t;
		}
		int sum1=0,sum2=0;
		for(i = m; i <= n; i++)
		{
			if(i%2==0)
			{
				sum1 += i * i;
			}
			else
			{
				sum2 += i * i * i;
			}
		}
		printf("%d %d\n",sum1,sum2);
	}
	return 0;
}