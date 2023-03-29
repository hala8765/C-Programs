#include<stdio.h>

void main()
{
    int a[10],n,sum=0,flag=0;
    printf("Enter the size of array:");
    scanf("%d",&n);
    printf("Enter the array elements:\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        sum=sum+a[i];
    }
    for(int i=2;i<sum/2;i++)
    {
        if(sum%i==0)
        {
            flag=1;
        }
    }
    if(flag==1)
    {
        printf("Sum=%d is composite",sum);
    }
    else{
        printf("Sum=%d is prime",sum);
    }
}