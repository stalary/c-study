#include <stdio.h>
char str[51][51];
char s[51];
int main()
{
	int N;
	while(~scanf("%d",&N))
	{
		int len;
		for(int i = 0; i < N; i++)
		{
				scanf("%s",str[i]);
			for(int j = 0; j < 51; j++)
			{
				s[j] = str[i][j];
				if(str[i][j]=='\0')
					break;
				len++;
			}
		}
		int num = 1;
		int sum[50];
	      for(int i = 0; i < N; i++)
		  {
			for(int j = 0; j < len; j++)
			{
				for(int k =0; k < len; k++)
				if(str[i][j] == s[k])
					sum[i]++;
			}
		  }
		for(int i = 1; i < N; i++)
		{
			if(sum[i]!=sum[i-1])
				num++;
		}
		printf("%d\n",num);
	}
	return 0;
}