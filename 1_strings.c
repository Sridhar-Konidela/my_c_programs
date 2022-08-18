#include<stdio.h>
int stringlength(char[]);
int main()
{
    char str[50];
    int l;
    puts("enter a string");
    gets(str);
    l=stringlength(str);
    printf("length of the string is %d",l);
    return 0;
}
//definition
int stringlength(char x[])
{
    int c=0,i;
    for(i=0;x[i]!='\0';i++)
    {
        c++;
    }
    return c;
}