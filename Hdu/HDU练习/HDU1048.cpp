#include<stdio.h>
#include<string>
#include<iostream>
using namespace std;
int main()
{
    char a[27]="VWXYZABCDEFGHIJKLMNOPQRSTU";
    char str[1000];
    int i,len;
    while(cin.getline(str,1000))
    {
        if(strcmp(str,"ENDOFINPUT")==0)
            break;
        if(strcmp(str,"START")!=0&&strcmp(str,"END")!=0)
        {
            len=strlen(str);
            for(i=0;i<len;i++)
            {
                if(str[i]>='A'&&str[i]<='Z')
                    printf("%c",a[str[i]-'A']);
                else
                    printf("%c",str[i]);
            }
            cout<<endl;
        }
        
    }
    return 0;    
}