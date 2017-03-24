#include <stdio.h>
int cal(int n)
{
	if(n <= 4)
	   return n;
	else
		return cal(n - 1) + cal(n-3);//n－1为前一年的牛数，加上生的牛，即能生产的牛的数目
}
int main()
{
	int t;
	while(~scanf("%d",&t))
	{
		if(t == 0)
			break;
		printf("%d\n",cal(t));
	}
	return 0;
}