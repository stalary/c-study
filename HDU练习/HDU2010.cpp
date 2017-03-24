#include <stdio.h>
#include <math.h>
/*
输入n，m求前m项和，每项为前一项的平方根，保留两位小数
注意n要为double类型最后求和才能为double
*/
int main()
{
	double n;
	int m;
	while(scanf("%lf%d",&n,&m)!=EOF)
	{
		int i;
		double num=0;
		for(i = 0; i < m; i++)
		{
			num += n;
			n = sqrt(n);
		}
		printf("%.2lf\n",num);
	}
	return 0;
}