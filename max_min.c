#include<stdio.h>
int main()
{
    int n,i, max,min,a;
    char ch;
    printf("enter a number\n");
    scanf("%d",&a);
    max=min=a;
    printf("do you want to continue y/n?\n");
    scanf(" %c",&ch);
    while(ch=='y'||ch=='Y')
    {
        printf("enter a number\n");
        scanf("%d",&a);
        if(a>max) 
            max=a;
        else if(a<min)
            min=a;
        printf("do you want to continue y/n?\n");
        scanf(" %c",&ch);    
    }
    printf("max=%d\n min=%d\n",max,min);
    return 0;
}