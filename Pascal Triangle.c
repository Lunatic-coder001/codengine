#include<stdio.h>

int factorial(int);

int main()
{
    int i, n, c, k;

    printf("Enter the number of rows\n");

    scanf("%d",&n);

    for ( i = 0 ; i < n ; i++ )
    {
        for ( c = 0 ; c <= ( n - i - 2 ) ; c++ )
        printf(" ");
        for( c = 0 ; c <= i ; c++ )
        {
            k=factorial(i)/(factorial(c)*factorial(i-c));
            printf("%d ",k);

        }
          printf("\n");

    }
    return 0;
}

int factorial(int n)
{
    int c;
    int result = 1;

    for( c = 1 ; c <= n ; c++ )
    result = result*c;
    return ( result );
}
