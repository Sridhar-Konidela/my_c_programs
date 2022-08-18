#include<stdio.h>
int main()
{
    int n,temp,rem,rev=0;
    printf("enter a number\n");
    scanf("%d",&n);
    temp=n;
    while(n>0)
    {
        rem=n%10;
        rev=rev*10+rem;
        n=n/10;
    }
    printf("reverse of %d is %d\n",temp,rev);
    //if(rev == temp)
        //printf(" %d is palindrome",temp);
   // else
       //printf(" %d is not a plaindrome",temp);
    return 0;
}                