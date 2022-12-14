#include<stdio.h>
int digit(int n)

{
    if (n == n%10)
    return n;
    return n%10+digit(n/10);
}

int main()
{
    int n;
    printf("enter a number ");
    scanf("%d",&n);
    digit(n);
    printf("%d",digit(n));

}