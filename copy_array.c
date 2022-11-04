// ****  Copying element from one array to other array

#include<stdio.h>
void main()
{
    int a[]={12,34,56,78,89},j;
    int n=sizeof(a)/sizeof(a[10]);
    int b[n];
    for(int i=0;i<n;i++)
    {
        b[i]=a[i];
      printf("%d ",b[i]);
  
    }
  

    
}
