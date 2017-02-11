#include<stdio.h>
#include<string.h>
const int MAXN=130;
int dp[MAXN][MAXN];
//dp[n][m]表示把n用最大数不超过m来表示的方法数
int calc(int n,int m)
{
    
    if(dp[n][m]!=-1) return dp[n][m];
    
    if(n<1||m<1) return dp[n][m]=0;
    if(n==1||m==1) return dp[n][m]=1;
    if(n<m) return dp[n][m]=calc(n,n);//因为m不可能大于n
    if(n==m) return dp[n][m]=calc(n,m-1)+1;
    return dp[n][m]=calc(n,m-1)+calc(n-m,m);
    
}
int main()
{
    int n;
    memset(dp,-1,sizeof(dp));//将数组初始化为元素都为－1
    
    while(scanf("%d",&n)!=EOF)
        printf("%d\n",calc(n,n));
    return 0;
}