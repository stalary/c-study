#include <stdio.h>
#include <stdlib.h>
/*
 abs存在与stdlib.h中
 */
int a[10010][10010];
int main()
{
	int m,n;
	while(~scanf("%d%d",&m,&n))
	{
	int max = abs(a[0][0]);
	int max1 = 0;
	int temp,t;
	int x=0,y=0;
	for(int i = 1; i <= m; i++)
		for(int j = 1; j <= n; j++)
		{
			scanf("%d",&a[i][j]);
		}
	for(int i = 1; i <= m; i++)
		for(int j = 1; j <= n; j++)
		{
			t = abs(a[i][j]);
			if(max < t)
			{
				temp = max;
				max = t;
				t = temp;
				max1 = a[i][j]; 
				x = i;
				y = j;
			}
		}
	printf("%d %d %d\n",x,y,max1);
	}
	return 0;
}