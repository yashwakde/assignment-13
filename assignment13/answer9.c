#include<stdio.h>
int count( int n)
{
    static int c = 0;
   if(n == 0)
      return c;
  else 
  { c++;
     count(n/10);
}
}
int main()
{int x;
   printf("enter a number");
   scanf("%d",&x);
   
   
    printf("%d",count(x));
}