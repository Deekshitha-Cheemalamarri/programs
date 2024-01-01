#include <stdio.h>
#include<string.h>
int main()
{
    //char str[]="Deekshitha is good girl";
    //char str1[]="lrig doog si ahtihskeeD";
    char str[100];
    gets(str);
    char str1[100];
    gets(str1);
    int len=strlen(str);
    int len1=strlen(str1);
    printf("%d %d\n",len,len1);
    int cnt=0,flag=0;
    char temp,temp1;
    if(len==len1)
    {
        while(str[cnt]!='\0')
        {
        
        temp=str[cnt];
        temp1=str1[len-cnt-1];
        
        if(temp!=temp1)
        {
            flag=1;
            break;
        }
        cnt++;
        }
        if(flag==1)
        {
            printf("not");
        }
        else
        {
            printf("yes");
        }
    }
    else
    {
        printf("nnot");
    }
    return 0;
}

