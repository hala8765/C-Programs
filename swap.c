#include<stdio.h>
 void main()
 {
    int a,b;
    int *p1,*p2;
    int *temp;
    printf("Enter the two numbers:");
    scanf("%d %d",&a,&b);
    p1=&a;
    p2=&b;
    *p1=*temp;
    *temp=*p2;
    *p1=*p2;
    printf("After swapping:\n");
    printf("a=%d,b=%d",a,b);

 }