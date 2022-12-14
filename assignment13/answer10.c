#include<stdio.h>
int pow( int x, int y)
{if(y == 0)
   return 1;
  return x*pow(x,y-1);
}

int main()
{int x,y,s;
   printf("enter a number");
   scanf("%d%d",&x,&y);
   s= pow(x,y);
   
    printf("%d",s);
}