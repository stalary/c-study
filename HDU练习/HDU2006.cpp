#include <stdio.h>
int main()
{
	int t;
	while(scanf("%d",&t)!=EOF)
	{
		int a,sum=1;
	while(t--)
	{
		scanf("%d",&a);
		if(a%2!=0)
		{
			sum *= a;
		}
	}
		printf("%d\n",sum);
	}
	return 0;
}