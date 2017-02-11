#include<stdio.h>
#include"string.h"
int main()
{
    char t[1010];//空间申请1000时会wa，最好直接申请1010
    
    while(scanf("%s",t))
    {
        if(t[0]=='0')    break;
        int temp = 0;
        int len = strlen(t);
        for(int i = 0;i<len;i++)
            temp += t[i] - '0';
    temp = (temp-1) % 9 +1;
    printf("%d\n",temp);
    }
    return 0;
}