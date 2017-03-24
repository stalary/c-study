#include"stdio.h"
#include"algorithm"
using namespace std;
int arr[1010];
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n;
        scanf("%d",&n);
        for(int i=0;i<n;i++)
            scanf("%d",&arr[i]);
        sort(arr,arr+n);
        for(int i=0;i<n;i++){
            if(i==n-1)
                printf("%d",arr[i]);
            else
                printf("%d ",arr[i]);
        }
        printf("\n");
    }
    
    return 0;
}