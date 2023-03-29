#include<stdio.h>
#include<string.h>
void main()
{
    char str[100];
    printf("Enter the string:");
    gets(str);
    int valid=0;
    int invalid=0;
    int l=strlen(str);
    for(int i=0;i<l;i++)
    {
        if(str[i]=='*')
        {
            valid++;
        }
        else if(str[i]=='#')
        {
            valid--;
        }
        else{
            invalid=1;
        }
    }
    if(invalid==0)
    {
    printf("Valid :%d",valid);
    }
    else{
        printf("Invalid");
    }
}