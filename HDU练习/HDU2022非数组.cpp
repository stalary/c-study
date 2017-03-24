#include <stdio.h>
#include <stdlib.h>
/*
输入时直接进行判断，注意abs是在stdlib.h中的
*/
int main()
{
	int m, n, val, max, maxi, maxj, i, j;
	
	while(scanf("%d%d", &m, &n) != EOF) {
		// 设置最大值初值
		max = 0;
		maxi = 1;
		maxj = 1;
  
		// 读入数据并且更新最大值
		for(i=1; i<=m; i++)
			for(j=1; j<=n; j++) {
				scanf("%d", &val);
				if(abs(val) > abs(max)) {
					max = val;
					maxi = i;
					maxj = j;
				}
			}
  
		// 输出结果
		printf("%d %d %d\n", maxi, maxj, max);
	}
	return 0;
}