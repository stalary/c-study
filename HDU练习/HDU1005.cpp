#include<iostream>
#include<stdio.h>
using namespace std;
int f[100000005];
int main()
{
    int a,b,n,i,j;
    
    f[1]=1;f[2]=1;
    while(scanf("%d%d%d",&a,&b,&n))
    {
        int s=0;//记录周期
        if(a==0&&b==0&&n==0) break;
        for(i=3;i<=n;i++)
        {
            f[i]=(a*f[i-1]+b*f[i-2])%7;
            for(j=2;j<i;j++)
                if(f[i-1]==f[j-1]&&f[i]==f[j])//此题可以这样做的原因就是 2个确定后就可以决定后面的
                {
                    s=i-j;
                    break;
                }
            if(s>0) break;
        }
        if(s>0){
            f[n]=f[(n-j)%s+j];
        }
        cout<<f[n]<<endl;
        
    }
    return 0;
}