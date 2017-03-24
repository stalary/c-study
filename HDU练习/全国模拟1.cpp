#include <stdio.h>
int s[10010];
int main()
{
	int a;
	while(~scanf("%d",&a))
	{
		int temp = a;
		int sum = 1;
		int b = 1,c = 1;
		int flag = 0;
		while(temp >= 10)
		{
			temp = temp/10;
			sum++;
		}
		int t = a;
		for(int i = sum; i >= 1; i--)
		{
			s[i] = t % 10;
			t = t/10;
		}
		for(int i = 1; i <= sum; i++)
		{
			b = b * s[i];
			c = 1;
			for(int j = sum; j >= i+1; j--)
			{
				c = c * s[j];
				if( ((i+1)==j)&&(b==c) )
				{
					flag = 1;
					printf("YES\n");
				}
			}
		}
		if(flag == 0)
		printf("NO\n");
	}
	return 0;
}