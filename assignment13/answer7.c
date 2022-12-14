#include<stdio.h>
int hcf(int n1,int n2)
{
    if(n2 == 0)
   {
     return n1;
   }
   else 
   {
      return hcf(n2,n1%n2);
   }
}
int main()
{
   int x ,y,s;
   printf("enter a number");
   scanf("%d%d",&x,&y);
    s=hcf(x,y);
   printf("%d",s);
}
