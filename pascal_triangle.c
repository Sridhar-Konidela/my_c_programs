#include<stdio.h>
int main()
{
    int row,col,no,n,space;
    printf("enter the no. of rowsyou want to print:\n");
    scanf("%d",&no);
    for(row=0;row<no;row++)
    {
        //spaces loop
        for(space=0;space<(no-row);space++)
        {
            printf(" ");
        }
        //for binomial coefficients
        n=1;
        for(col=0;col<=row;col++)
        {
            printf(" %d,n");
            n=n*(row-col)/(col+1);
        }
        printf("\n");
    }
}