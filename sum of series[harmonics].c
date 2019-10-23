#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,n;
    float sum=1.000000;
    printf("Enter the value of N: ");
    scanf("%d", &n);
    for (i=1;i<=n;i++)
    {
        printf("(1/%d)+",i);
    }
    for (j=2;j<=n;j++)
    {
        sum=sum+(1.000000/(float)j);
    }
    printf("\nSum of 'N' Harmonics are: %f",sum);
    return 0;
}
