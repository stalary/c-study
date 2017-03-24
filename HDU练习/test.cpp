#include <stdio.h>
#include <stdlib.h>
/*
 abs存在与stdlib.h中
 */
int a[51][51];
double s[51][3];
int main()
{
	int m,n;
	while(~scanf("%d%d",&n,&m))
	{
		int flag = 0;
		int sum = 0;
	for(int i = 1; i <= n; i++)
		for(int j = 1; j <= m; j++)
		{
			scanf("%d",&a[i][j]);
			s[i][1] += a[i][j];
			s[i][2] += a[j][i];
		}
	for(int i = 1; i <= n; i++)
	{
		s[i][1] = s[i][1]/m;
	}
	for(int i = 1; i <= m; i++)
	{
		s[i][2] = a[i][2]/n;
	}
		for(int i = 1; i <= n; i++)
			for(int j = 1; j <= m; j++)
			{
				if(a[i][j] < s[i][1])
				{
					flag = 1;
					break;
				}
			}
		if(flag == 0)
		{
			sum++;
		}
		for(int i = 1; i <= n - 1; i++)
		{
			printf("%.2lf ",s[i][1]);
		}
		printf("%.2lf\n",s[n][1]);
		for(int i = 1; i <= n - 1; i++)
		{
			printf("%.2lf ",s[i][2]);
		}
		printf("%.2lf\n",s[n][2]);
		printf("%d",sum);
	}
	return 0;
}