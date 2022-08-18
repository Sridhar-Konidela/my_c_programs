//sum of aaray elements
#include<stdio.h>
#define SIZE 20
int main()
{
    int a[SIZE],n,i,sum=0;
    printf("enter how many elements you want to read\n");
    scanf("%d",&n);
    printf("enter %d elements\n",n);
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(i=0;i<n;i++)
    sum=sum+a[i];
    printf("sum of elements is= %d",sum);
    return 0;
}