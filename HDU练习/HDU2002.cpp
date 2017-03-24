#include <stdio.h>
#define PI 3.1415927
/*
类型要用double，否则会数据会不准确
*/
int main()
{
	double r;
	while(scanf("%lf",&r)!=EOF)
	{
		double temp;
		temp = 4 * PI * r * r * r/3;
		printf("%.3lf\n",temp);
	}
	return 0;
}