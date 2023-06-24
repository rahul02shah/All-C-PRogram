#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    n = n/2+1;
    for(int i=1;i<=n;i++)
    {
        for(int j=n-i;j>=1;j--)
        {
            printf(" ");
        }
        for(int k=1;k<=i;k++)
        {
            printf("*");
        }
        printf("\n");
    }

    for(int i=1;i<=n;i++)
    {

        for(int k=1;k<=i;k++)
        {
            printf(" ");
        }
        for(int j=n-i;j>=1;j--)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
