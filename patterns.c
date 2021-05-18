#include <stdio.h>
#include <cs50.c>
int main()
{
   int x,y;
   x= get_int("Enter type of pattern(1 or 2) ");
   y= get_int("Number of rows ");
   if(x==1)
   for(int i=1;i<=y;i++)
   {
       for(int j=y;j>=i;j--)
       {
           printf("#");
       }
       printf("\n");
   }
   else if(x==2)
    for(int i=1;i<=y;i++)
   {
       for(int j=0;j<y;j++)
       {
           if(j>=y-i)
           {
               printf("#");
           }
           else
           {
               printf(" ");
           }
       }
       printf("\n");
   }
   else
   {
     printf("Error");
   }

    return 0;
}
