# c
#include <stdio.h>
#include <stdlib.h>

int name(char str[])
{

    int x=0,l=0;
    while(str[x]!='\0')
    {
        l++;
        x++;
    }
    return l;


}
int main()
{
    char str[50];
    int len;
    printf("enter the string=");
    gets(str);
    len=name(str);
    printf("string length=%d",len);
    return 0;
}
