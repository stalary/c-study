#include"stdio.h"
#include <algorithm>
using namespace std;
int mark[1000000];

int main()
{
    int n;
    while(scanf("%d",&n)!=EOF)
    {
        for (int i = 0;i<n;i++)
            scanf("%d",&mark[i]);
        sort(mark,mark+n);
        printf("%d\n",mark[(n+1)/2]);
        memset(mark,0,sizeof(mark));
    }
    return 0;
}