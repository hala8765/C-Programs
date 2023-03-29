#include<stdio.h>

void main()
{
    int r,c,a[100][100];
    printf("Enter the number of rows and columns:");
    scanf("%d %d",&r,&c);
    printf("Enter the elemnts:");
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            scanf("%d",&a[i][j]);
            if(a[i][j]==0)
            {
                a[i][j]='#';
            }

        }
    }
    printf("2D ARRAY:\n");
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            if(a[i][j]=='#')
            {
                printf("#\t");
            }
            else
              printf("%d\t",a[i][j]);
        }
        printf("\n");
    }

}