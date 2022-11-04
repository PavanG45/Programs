//   ****** Twisted prime ******

#include<stdio.h>
void main()
{
    int num,rev=0,sum=0,rem,count;
   
    printf("Enter Prime Number\n");
    scanf("%d",&num);
     int temp=num;
     
    // to reverse number
    while(num>0)
    {
        rem=num%10;
        rev=rev*10+rem;
        num=num/10;
        
    }

   //to check prime
    count=0;
    for(int i=2;i<rev;i++)
    {
        if(rev%i==0)
        {
            count=1;
            break;
        }
    }
    if(count==0)
    {
        printf("%d is a Twisted prime",temp);
    }
    else
    {
        printf("%d is not a Twisted prime",temp);
    }
}
