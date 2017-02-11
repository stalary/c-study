#include<stdio.h>
int main()
{   int a[40];
    a[0] = 1;
    for(int i = 2; i <= 1000; i++)
    {   int k = 1;
        int sum = 1;
        for(int j = 2; j < i; j++)
        {
            if(i % j ==0)
            {
                sum +=j;
                a[k] = j;
                k = k+1;
            }
        }
        if(sum == i)
        {
            printf("%d 是完数,因子为: ",sum);
            for(int m = 0; m < k ;m++)
            {
                printf(" %d ",a[m]);
            }
            printf("\n");
        }
    }
    return 0;
}