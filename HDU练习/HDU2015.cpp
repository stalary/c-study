#include <stdio.h>
/*
 注意格式，当能被整除时的最后一个是换行而且没有空格
 */
int n,m;
int a[100];
int main()
{
	
	a[0] = 2;
	while(scanf("%d%d",&n,&m)!=EOF)
	{
		for(int i = 1; i <= n; i++)
		{
			a[i] = a[i-1] + 2;
		}
		int t = n%m;
		int j;
		for(int i = 0; i < n - t; i = i + m)
		{
			int sum = 0;
		for(j = i; j < i + m; j++)
		{
			sum += a[j];
		}
			if(j == n)
			printf("%d\n",sum/m);
			else
			printf("%d ",sum/m);
		}
		if(t != 0)
		{
		int sum = 0;
		for(int i = n-t; i < n; i++)
		{
			
			sum += a[i];
		}
		printf("%d\n",sum/t);
			}
	}
	return 0;
}