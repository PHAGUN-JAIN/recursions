#include <stdio.h>
int sum(int n);
void main()
{
 int number,result;
  printf("enter the number up to which sum is to be calculated");
  scanf("%d",&number);
  result=sum(number);
  printf("result=%d",result);
}
int sum(int n)
{
 if(n!=0)
  {
   return n+sum(n-1);
  }
 else return n;
}
