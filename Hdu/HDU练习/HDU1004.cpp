#include"iostream"
#include<string>
using namespace std;
int main()
{
    int b[1001];
    string a[1000];
    int n;
    while(true)
    {
        cin>>n;
        if(n==0)
            break;
        else
        {
            for(int i=0;i<n;i++)
            {
                cin>>a[i];
            }
            for(int m=0;m<n;m++)
            {
                b[m]=0;
                for(int j=m+1;j<n;j++)
                {
                    if(a[j]==a[m])
                        b[m]++;
                }
            }
        }
        int max=0,k=0;
        for(int m=0;m<n-1;m++)
        {
            if(max<b[m])
            {
                max=b[m];
                k=m;
            }
        }
        cout<<a[k]<<endl;
    }
    return 0;
}