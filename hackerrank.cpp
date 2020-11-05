#include<stdio.h>
int main()
{
int i,j,n;
scanf("%d",&n);
for(i=0;i<n;i++)
{
        for(j=1;j<=n-i;j++)
                printf("%d",j);
        for(j=0;j<((i*2)-1 + 1);j++)
                printf("*");
        for(j=n-i;j>0;j--)
        {
                // if(j==n)
                // {
                // }
                // else
                printf("%d",j);
        }
        printf("\n");
 }}