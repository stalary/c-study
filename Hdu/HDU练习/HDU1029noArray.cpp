#include"stdio.h"

int main()
{
    int n;
    while(scanf("%d",&n)!=EOF)
    {
        int a,num=0,temp;
        while(n--){
        
        scanf("%d",&a);
        if(num==0)
        {
            temp=a;
            num++;
        }
        else
        {
            if(a==temp)
                num++;
            else
                num--;
        }
        }
    printf("%d\n",temp);
    }
    return 0;
}