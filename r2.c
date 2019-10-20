#include <stdio.h>
int fact(int i);
void main()
{
 int n,result;
 printf("enter a number");
 scanf("%d",&n);
 result=fact(n);
 printf("the factorial of %d is %d\n",n,fact(n));
}
 int fact(int i)
{
  if(i<=1)
    return 1;
    return i*fact(i-1);
    
}
