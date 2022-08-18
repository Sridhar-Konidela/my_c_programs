#include<stdio.h>
void swap(int *a,int *b);
int main()
{
    int x=3; int y=4;
    printf("before swapping value of x and y is %d and %d\n",x,y);
    swap(&x, &y);
    printf("after swapping value of x and y is %d and %d\n",x,y);
    return 0;
}
void swap(int *a,int *b )
{
    int temp;
    temp=*a;
    *a=*b;    
    *b=temp;
}
