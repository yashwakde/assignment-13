#include<stdio.h>
int sumnatural(int n)

{
    if (n == 1)
    return 1;
    return n+sumnatural(n-1);
}

int main()
{
    int n;
    printf("enter a number ");
    scanf("%d",&n);
    sumnatural(n);
    printf("%d",sumnatural(n));

}