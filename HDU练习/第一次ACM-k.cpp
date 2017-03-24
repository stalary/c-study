#include <stdio.h>
/*
 注意交换时从第二块开始的for循环是末尾减首位／2+首位
 */
int main()
{
	int t;
	while(scanf("%d",&t)!=EOF)
	{
		getchar();
		while(t--)
		{
			int tem[100];
			tem[0] = -1;
			int temp=1;
			char str[1000];
			char c;
			for(int i = 0; i < 1000; i++)
			{
			scanf("%c",&str[i]);
			if(str[i] == ' ')
			{
				tem[temp] = i;
				temp++;
			}
			if(str[i] == '\n')
			{
				tem[temp] = i;
				break;
			}
			}
		    if(temp > 1)
			{
			for(int j = 1; j <= temp; j++)
			{
			for(int k = tem[j-1] + 1,l = tem[j]; k < (l-k)/2+k; k++,l--)
			{
				c = str[k];
				str[k] = str[l-1];
				str[l-1] = c;
			}
			}
			}
			else
			{
				for(int i = 0,len = tem[1]; i < len/2; i++,len--)
				{
					c = str[i];
					str[i] = str[len-1];
					str[len-1] = c;
				}
			}
			for(int i = 0; i < tem[temp]; i++)
			{
			printf("%c",str[i]);
			}
			printf("\n");
		}
	}
	return 0;
}