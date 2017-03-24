#include <stdio.h>
/*
注意数字从0-9，注意换行退出
 */
int main()
{
	int t,temp;
	char a;
	scanf("%d",&t);
	getchar();
	while(t--)
	{
		temp = 0;
		while((a = getchar()) != '\n')
		{
			if(a>='0'&&a<='9')//数字是从0-9
				temp++;
		}
		printf("%d\n",temp);
	}
	return 0;
}