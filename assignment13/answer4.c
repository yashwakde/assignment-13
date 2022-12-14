#include<stdio.h>
int square(int n)

{
    if (n == 1)
    return 1;
    return n*n+square(n-1);
}

int main()
{
    int n;
    printf("enter a number ");
    scanf("%d",&n);
    square(n);
    printf("%d",square(n));

}