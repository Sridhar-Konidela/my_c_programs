//swapping two numbers
//CALL BY REFERENCE
#include<stdio.h>
//function prototype for swapping two numbers using call by value
void swap(int*,int* );
int main()
{
    int x,y;//local variables of main
    printf("enter x,y values\n");
    scanf("%d%d",&x,&y);
    printf("before swapping x=%d, y=%d in MAIN\n",x,y);
    swap(&x,&y);//function call
    printf("after swapping x=%d, y=%d in MAIN\n",x,y);
    }
void swap(int *p1,int *p2)
          {
    printf("before swapping x=%d , y=%d in  SWAP\n",*p1,*p2);
    int t;
    t=*p1;
    *p1=*p2;
    *p2=t;
    printf("after swapping x=%d , y=%d in  SWAP\n",*p1,*p2);
          }