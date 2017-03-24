#include <stdio.h>
#include <math.h>
/*
可以先进行计算fibonacci一共有多少个，经计算从第46个开始为负
所以只需要申请46的数组，通过中间变量存储数组，最后进行输出
因为输入数组时是从最大开始，所以输出时应该倒序输出
*/
int main()
{
	int t,i,j;
	int f[46];
	int temp[50];
	f[0] = 1,f[1] = 1;
	for(i = 2; i <= 45; i++)
	{
		f[i] = f[i-2] + f[i-1];
	}
	while(scanf("%d",&t)!=EOF)
	{
		int n;
		while(t--)
		{
			int sum=0;
			int n;
			scanf("%d",&n);
			printf("%d=",n);
			for(i = 45; i >= 0; i--)
			{
				if(f[i] == n)
				{
					temp[sum] = f[i];
					break;
				}
				else if((f[i]>n)&&(f[i-1]<n))
				{
					temp[sum] = f[i-1];
					n -= temp[sum];
					sum++;
				}
			}
			printf("%d",temp[sum]);
			for(j = sum-1; j >= 0; j--)
			{
				printf("+%d",temp[j]);
			}
			printf("\n");
		}
	}
	return 0;
}