//print even numbers in an array
#include<stdio.h>
#define size 20
int main()
{
    int a[size],n,i,ce,co;
    printf("enter how many elements you want to read\n");
    scanf("%d",&n);
    printf("enter %d elements\n",n);
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(i=0;i<=n;i++)
   // {
    if(a[i]%2==0)
       // ce++;
    //else
       // co++;    
   // }
    printf(" %d\t",a[i]);
    return 0;
}