#include <stdio.h>
#include <cs50.h>
int main(void)
{
    float x,y;
   float a= get_float("side 1 ");
   float  b= get_float("side 2 ");
   float c= get_float("side 3 ");

   if(a > b && a > c)
   {
        x= (b*b+c*c);
        y= a*a;
        if(x==y)
        {
            printf("Yes");
        }
        else
        {
            printf("No");
        }

   }
   else  if(b > a && b > c)
   {
        x= (a*a+c*c);
        y= b*b;
        if(x==y)
        {
            printf("Yes");
        }
        else
        {
            printf("No");
        }

   }
  else if(c > a && c > b)
   {
        x= (a*a+b*b);
        y= c*c;
        if(x==y)
        {
            printf("Yes");
        }
        else
        {
            printf("No");
        }

   }
}
