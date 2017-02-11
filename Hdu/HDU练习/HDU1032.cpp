#include"stdio.h"

int main()
{
    int i,j,sum,max;
    while(scanf("%d%d",&i,&j)!=EOF)
    {
        int t;
        if(i>j)
        {
            printf("%d %d",i,j);
            t=i;
            i=j;
            j=t;
        }
        else
            printf("%d %d",i,j);
        max=0;
        for(int m=i;m<=j;m++)
        {
            sum=1;//当n为1时也要进行一次运算；
            int n=m;
            while(n!=1){
            if(n%2!=0)
                n=3*n+1;
            else
                n=n/2;
            sum++;
            }
        if(max<sum)
            max=sum;
        }
        printf(" %d\n",max);
        
    }
    return 0;
}