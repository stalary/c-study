#include <stdio.h>
/*
 多项式的描述如下：
 1 - 1/2 + 1/3 - 1/4 + 1/5 - 1/6 + ...
 输入数据由2行组成，首先是一个正整数m（m<100），表示测试实例的个数，
 第二行包含m个正整数，对于每一个整数(不妨设为n,n<1000），求该多项式的前n项的和。
 数据在结束后全部打印出
 注意：不要直接操作m，要操作中间变量，否则最后打印会无法打印
 */
int main()
{
	int t;
	while(scanf("%d",&t)!=EOF)
	{
		int i,temp;
		temp = t;
		double sum[1000]={0};
		while(t--)
		{
			int n;
			double flag=1;
			scanf("%d",&n);
			for(i = 1; i <= n; i++)
			{
				sum[t] += flag/i;
				flag = -flag;
			}
		}
		for(i = temp-1; i >= 0; i--)
		{
			printf("%.2lf\n",sum[i]);
		}
	}
	return 0;
}