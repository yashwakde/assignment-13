#include<stdio.h>
int sumodd(int n)

{
    if (n == 1)
    return 1;
    return n+sumodd(n-2);
}

int main()
{
    int n;
    printf("enter a number ");
    scanf("%d",&n);
    sumodd(n);
    printf("%d",sumodd(n));

}