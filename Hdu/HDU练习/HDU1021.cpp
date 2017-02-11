#include<stdio.h>
int main() {
    //找规律，每4个一循环
    //f(n)=(f(n-1)+f(n-2))%3;
    //0 1 2 3 4 5 6
    //1 2 0 2 2 1 0
    int n;
    while(scanf("%d",&n)!=EOF){
        if((n-2)%4==0)
            printf("yes\n");
        else
            printf("no\n");
    }
    return 0;
}