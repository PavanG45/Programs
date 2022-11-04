
//******* HAPPY NUMBER *******
#include<stdio.h>
void main()
{
    int num=82, rem=0,sum=0;
   int res=num;
   while(sum!=1&&sum!=4)
   {
       sum=0;
  
    while(num>0)
    {
        rem=num%10;
        sum=sum+(rem*rem);
        num=num/10;
    }
    num=sum;
   }
   if(sum==1)
   {
       printf("%d is a happy number",res);
   }
   else
   {
       printf("%d is not happy number",res);
   }
 }
