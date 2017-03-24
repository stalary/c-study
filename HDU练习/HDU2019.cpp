#include<stdio.h>
/*
 先插入到末尾，然后再进行排序即可
 */
int a[102];
int main()
{
	int n,m;
	while(scanf("%d%d",&n,&m)!=EOF)
	{
		if(n == 0 && m == 0)
			break;
		a[n] = m;
		int temp;
		for(int i = 0; i < n; i++)
		{
			scanf("%d",&a[i]);
		}
		int k = n + 1;
		for(int i = 0; i < k - 1; i++)
		{
			for(int j = i + 1; j < k; j++)
			{
				if(a[i] > a[j])
				{
					temp = a[i];
					a[i] = a[j];
					a[j] = temp;
				}
			}
		}
		for(int i = 0; i < n; i++)
		{
			printf("%d ",a[i]);
		}
		printf("%d\n",a[n]);
	}
	return 0;
}