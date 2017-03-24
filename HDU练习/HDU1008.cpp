#include<stdio.h>
int main()
{
    int a;
    while(scanf("%d",&a))
    {
        if(a==0)    break;
        int final = 0;
        int count = 0;
        for(int i=0;i<a;i++)
        {
            int temp;
            scanf("%d",&temp);
            if(temp > final)
            {
                count += 6 * (temp - final) + 5;
                final = temp;
            }
            else if(temp <= final)
            {
                count += 4 * (final - temp) + 5;
                final = temp;
            }
        }
        printf("%d\n",count);
    }
    return 0;
}