#include<stdio.h>
int sumeven(int n)

{
    if (n == 2)
    return 2;
    return n+sumeven(n-2);
}

int main()
{
    int n;
    printf("enter a number ");
    scanf("%d",&n);
    sumeven(n);
    printf("%d",sumeven(n));

}