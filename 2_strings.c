#include<stdio.h>
int stringlength(char[]);
int main()
{
    char str[50];
    int l;
    puts("enter a sring");
    gets(str);
    l=stringlength(str);
    printf("length of string is %d",l);
    return 0;

}
int stringlength(char x[])
{
    int i,c=0;
    for(i=0;x[i]!='\0';i++)
    c++;
    return c;
}


