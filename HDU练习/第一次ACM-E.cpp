#include <iostream>
using namespace std;
#include <cstring>
/*
将最外层扩大一，对数组所有值赋值为‘0’，
当遇到.的时候，使其上下左右都为.，
因为四个角是无法碰到的，所以先去掉四个角，
最后通过判断‘0’的个数来计数
*/
int main()
{
	int t;
	while(scanf("%d",&t)!=EOF)
	{
		char str[100][100];
		while(t--)
		{
			int m,n;
			int count = -4;
			scanf("%d%d",&m,&n);
			for(int i = 0; i <= m + 1; i++)
				for(int j = 0; j <= n + 1; j++)
				{
					str[i][j] = '0';
				}
			for(int i = 1; i <= m; i++)
			{
				for(int j = 1; j <= n; j++)
				{
					scanf("%c",&str[i][j]);
			    }
			getchar();
			}
	    for(int i = 0; i <= m + 1; i++)
		    for(int j = 0; j <= n + 1; j++)
			{
			if(str[i][j] == '.')
			{
				str[i][j-1] = '.';
				str[i][j+1] = '.';
				str[i-1][j] = '.';
				str[i+1][j] = '.';
			}
			if(str[i][j] == '0')
			{
				count++;
			}
			}
			printf("%d\n",count);
		}
	}
	return 0;
}