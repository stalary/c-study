#include <stdio.h>
/*
 dp[i][1]存储数据
 dp[i][2]存储中间变量
 dp[i][3]存储张数
 循环相减，判断是否小于零
 */
int dp[50][4];
int m[10]={0,100,70,50,20,10,7,5,2,1};
int cal(int temp)
{
	for(int i = 1; i < 10; i++)
	{
		dp[i][3] = 0;
	}
	for(int i = 1; i < 10; i++)
	{
		if(temp - m[i]<0)
			continue;
		dp[i][2] = temp - m[i];
		dp[i][3]++;
		for(int j = 1; j < 10; j++)
		{
				if(dp[i][2] - m[j]<0)
					continue;
				dp[i][2] = dp[i][2] - m[j];
				dp[i][3]++;
			if(dp[i][2] == 0)
				break;
		}
	}
			int min = 100000;
			for(int i = 1; i < 10; i++)
			{
				if(dp[i][3] != 0)
				if(min > dp[i][3])
					min = dp[i][3];
			}
			return min;
	}

int main()
{
	
	int temp;
	while(~scanf("%d",&temp))
	{
		for(int i = 1; i < 50; i++)
		{
			dp[i][1] = temp;
		}
		printf("%d\n",cal(temp));
	}
	
	return 0;
}