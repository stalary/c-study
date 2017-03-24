#include"stdio.h"
#include"algorithm"
using namespace std;
int main()
{
    int arr[3];
    while(scanf("%d%d%d",&arr[0],&arr[1],&arr[2])!=EOF)
    {
        sort(arr,arr+3);
        if(arr[0]>168)
            printf("NO CRASH\n");
        else
            printf("CRASH %d\n",arr[0]);
    }
    return 0;
}