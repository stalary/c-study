#include<stdio.h>
int main()
{
    printf("n e\n");
    printf("- -----------\n");
    printf("0 1\n");
    printf("1 2\n");
    printf("2 2.5\n");
    double sum = 2.5;
    int temp = 2;
    for(int n=3;n<=9;n++)
    {   temp *= n;
        sum += 1.0 / temp;
        printf("%d %.9lf\n",n,sum);
    }
    return 0;
}