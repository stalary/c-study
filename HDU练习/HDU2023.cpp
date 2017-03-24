#include <stdio.h>
#include <stdlib.h>
/*
 n学生数，m课程数
 s[i][1]存储课程平均成绩，s[i][2]存储学生平均分
 尽量不要用二维数组表示多个数组，容易记混！！
 */
int main()
{
	int m,n;
	while(~scanf("%d%d",&n,&m))
	{
		double a[51][51]={0};
		double s[51][3]={0};
		int flag;
		int sum = 0;
		for(int i = 1; i <= n; i++)
			for(int j = 1; j <= m; j++)
			{
				scanf("%lf",&a[i][j]);
				
			}
		for(int i = 1; i <= n; i++)
		{
			for(int j = 1; j <= m; j++)
			{
				s[i][2] += a[i][j];
			}
			s[i][2] = s[i][2]/m;
		}
		for(int i = 1; i <= m; i++)
		{
			for(int j = 1; j <= n; j++)
			{
				s[i][1] += a[j][i];
			}
			s[i][1] = s[i][1]/n;
		}
		for(int i = 1; i <= n; i++)
		{
			flag = 0;
			for(int j = 1; j <= m; j++)
			{
				if(a[i][j] < s[j][1])
				{
					flag = 1;
					break;
				}
			}
				if(flag == 0)
				{
					sum++;
				}
			}
		for(int i = 1; i <= n - 1; i++)
		{
			printf("%.2lf ",s[i][2]);
		}
		printf("%.2lf\n",s[n][2]);
		for(int i = 1; i <= m - 1; i++)
		{
			printf("%.2lf ",s[i][1]);
		}
		printf("%.2lf\n",s[m][1]);
		printf("%d\n\n",sum);
	}
	return 0;
}