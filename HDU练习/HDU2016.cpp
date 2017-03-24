#include <stdio.h>
/*
 注意交换时，要新声明一个中间变量
 */
int a[110];
int main()
{
	int t;
	while(scanf("%d",&t)!=EOF)
	{
		if(t == 0)
			break;
		for(int i = 0; i < t; i++)
		{
			scanf("%d",&a[i]);
		}
		int temp = 0;
		for(int i = 0; i < t; i++)
		{
			if(a[temp] > a[i])
			{
				temp = i;
			}
		}
		int te = a[0];
		a[0] = a[temp];
		a[temp] = te;
		for(int i = 0; i < t - 1; i++)
			printf("%d ",a[i]);
		printf("%d\n",a[t-1]);
	}
	return 0;
}