#include <stdio.h>
/*
注意结构体的使用
*/
typedef struct lesson
{
	int start;
	int end;
}le;
int main()
{
	int t;
	le a[11010];
	while(~scanf("%d",&t))
	{
		for(int i = 0; i < t; i++)
		{
			scanf("%d%d",&a[i].start,&a[i].end);
		}
		le temp;
		for(int i = 0; i < t - 1; i++)
		{
			for(int j = i + 1; j < t; j++)
			{
				if(a[i].end>a[j].end)
				{
					temp = a[i];
					a[i] = a[j];
					a[j] = temp;
				}
			}
		}
		int te = a[0].end;
		int num = 1;
		for(int i = 1; i < t; i++)
		{
			if(a[i].start < te)
				continue;
			else
			{
				te = a[i].end;
			   num++;
			}
		}
		printf("%d\n",num);
	}
	return 0;
}