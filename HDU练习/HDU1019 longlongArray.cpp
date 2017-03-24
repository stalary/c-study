#include<stdio.h>
long long a[1000000];
long long f(long long a, long long b) { //递归求最大公约数（GCD）
    if(a%b==0)
        return b;
    else return f(b,a%b);
}
int main() {
    int m,n,i;
    scanf("%d",&m);
    while(m--) {
        scanf("%d",&n);
        for(i=0;i<n;i++)
            scanf("%lld",&a[i]);
        for(i=0;i<n-1;i++)
            a[i+1]=a[i+1]*a[i]/f(a[i+1],a[i]);//由GCD得出LCM
        printf("%lld\n",a[n-1]);
    }
    return 0;
}