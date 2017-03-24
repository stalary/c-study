#include <stdio.h>
/*
斐波纳切递归数组
 */
int f(int i)
{
	if(i == 0||i == 1)
		return 1;
	else
		return f(i-1)+f(i-2);
}
int main()
{
	int t;
	while(scanf("%d",&t)!=EOF)
	{
		while(t--)
		{
			int a,temp = 1,flag = 0;
			int sum[50];
			scanf("%d",&a);
			printf("%d=",a);
			while(1)
			{
			if(f(temp) == a)
			{
				sum[flag] = a;
				break;
			}
			if(f(temp)<a)
			{
				temp++;
			}
			if( (f(temp)>a)&&(f(temp-1)<a) )
			{
				sum[flag] = f(temp-1);
				a -= f(temp-1);
				temp=1;
				flag++;
			}
			}
			printf("%d",sum[flag]);
			for(int i = flag - 1; i >= 0; i--)
				printf("+%d",sum[i]);
			printf("\n");
			flag = 0;
		}
	}
	return 0;
}