#include <stdio.h>
/*
 HDU2000ASCII码排序
 注意每一组数据最后要用getchar吸收回车
 */
int main()
{
	char a,b,c;
	while(scanf("%c%c%c",&a,&b,&c)!=EOF)
	{
		int t;
		char temp;
		int a1 = a - '0';
		int b1 = b - '0';
		int c1 = c - '0';
		if(a1 > b1)
		{
			t = a1;
			a1 = b1;
			b1 = t;
			
			temp = a;
			a = b;
			b = temp;
		}
		if(b1 > c1)
		{
			t = b1;
			b1 = c1;
			c1 = t;
			
			temp = b;
			b = c;
			c = temp;
		}
		if(a1 > b1)
		{
			t = a1;
			a1 = b1;
			b1 = t;
			
			temp = a;
			a = b;
			b = temp;
		}
		//printf("%d %d %d",a1,b1,c1);
		printf("%c %c %c\n",a,b,c);
		getchar();
	}
	return 0;
}