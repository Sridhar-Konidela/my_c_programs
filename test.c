#include<stdio.h>
int main()
{
  int n,i,rev=0,rem,temp;
   printf("enter a number\n");
    scanf("%d",&n);
    temp=n;
    while(n>0)
    {
        rem=n%10;
        rev=rev*10+rem;
        n=n/10;
    }
    printf("reverse of %d is %d",temp,rev);
    return 0;
}