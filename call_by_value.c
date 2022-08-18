//swapping two numbers
//CALL BY VALUE
#include<stdio.h>
//function prototype for swapping two numbers using call by value
void swap(int,int );
int main()
{
    int x,y;//local variables of main
    printf("enter x,y values\n");
    scanf("%d%d",&x,&y);
    printf("before swapping x=%d, y=%d in MAIN\n",x,y);
    swap(x,y);//function call
    printf("after swapping x=%d, y=%d in MAIN\n",x,y);
    }
void swap(int x,int y)
          {
    printf("before swapping x=%d , y=%d in  SWAP\n",x,y);
    int t;
    t=x;
    x=y;
    y=t;
    printf("after swapping x=%d , y=%d in  SWAP\n",x,y);
}