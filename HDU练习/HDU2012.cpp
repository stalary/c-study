#include <stdio.h>
#include <math.h>
/*
 对于表达式n^2+n+41，当n在（x,y）范围内取整数值时（包括x,y）(-39<=x<y<=50)，
 判定该表达式的值是否都为素数,以0 0结束
 对于每个给定范围内的取值，如果表达式的值都为素数，则输出"OK",否则请输出“Sorry”,每组输出占一行。
注意：范围内每次运算都要进行判断，当遇到素数时立刻跳出循环，输出Sorry
 */
int  judge(int temp)
{
	int i,flag=1;
	int len = sqrt(temp);
	for(i = 2; i < len; i++)
	{
		if(temp%i==0)
		{
			flag=0;
			break;
		}
	}
	return flag;
}
int main()
{
	int x,y,i;
	while(scanf("%d%d",&x,&y)!=EOF)
	{
		if(x==0&&y==0)
			break;
		int temp=0,flag=1;
		for(i = x; i <= y;i++)
		{
			temp = i*i + i + 41;
			flag=judge(temp);
			if(flag == 0)
				break;
		}
		if(flag == 1)
		{
			printf("OK\n");
		}
		else
		{
			printf("Sorry\n");
		}
	}
	return 0;
}