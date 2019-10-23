#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c,sum=0,k=0;
    for (a=1;a<=25;a++)
    {
        for (b=a;b<=25;b++)
        {
            for (c=b;c<=25;c++)
            {
                k+=c*c;
                sum+=(a*a)+(b*b);
                if (c*c==a*a+b*b)
                {
                    printf("\nThe triplets are %d,%d,%d",a,b,c);
                }

            }

        }

    }

    return 0;
}
