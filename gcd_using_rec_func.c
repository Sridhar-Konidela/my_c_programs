//GCD of two numbers using functions
#include<stdio.h>
int gcd(int,int);
int main()
{
    int x,y,z;
    printf("enter two numbers \n");
    scanf("%d%d",&x,&y);
    z=gcd(x,y);
    printf("GCD of %d and %d is %d",x,y,z);
    return 0;
}
int gcd(int x,int y)
{
    if(y==0)//base condition
        return x;
    else
        return (gcd(y,x%y));    
}