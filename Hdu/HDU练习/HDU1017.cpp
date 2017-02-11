#include<stdio.h>
#include"string.h"
int main()
{
    int t;
    
    scanf("%d",&t);
    while(t--)
    {
        int i=0;
        int n,m;
        while(scanf("%d%d",&n,&m))
        {
        
        if(n==0&&m==0)  break;
        int count=0;
        for(int b=1;b<n;b++)
        {
            for(int a=1;a<b;a++){
                double temp =(double)(a*a + b*b + m)/(a*b);
                if((int)temp == temp)
                    count++;
            }
        }
        i++;
        printf("Case %d: %d\n",i,count);
        }
        if(t)
            printf("\n");
    }
    return 0;
}